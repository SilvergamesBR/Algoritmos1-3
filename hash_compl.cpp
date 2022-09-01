#include <iostream>
 
using namespace std;

struct tab{//stuct da tabela
        int k;
        int status;
    };

int h1(int k, int m){
    int H;
    H=k%m;
    if(H<0){
        H=H+m;
    }
    return H;
}

int h2(int k, int m){
    int H;
    H=1+(k%(m-1));
    if(H<0){
        H=H+m;
    }
    return H;
}

int hash1(int k, int i, int m){
    int H;
    H =(h1(k,m)+(i*h2(k,m)))%m;
    return H;
}

int HASHINSERT(tab *T,int m, int k){
    int j;
	int i = 0;
    while (i<m){
        j = hash1(k,i,m);
        if (T[j].status != 1){
            	T[j].k = k;
            	T[j].status = 1;
            	return j;
		}else{
            i++;
		}
	}
	return -1;
}

int hash_search(tab *t, int m, int k){ 
	int i=0, j;
    while (t[j].status != 0  || i < m ){
        j = hash1(k,i,m);
        if (t[j].k == k){
            return j;
        }else{
            i++;
        }
    }
    return (-1);
}

int hash_remove(tab *t, int m, int k){
    int x;
    x=hash_search(t,m,k);
    if(x!=(-1)){
        t[x].k=-1;
        t[x].status=2;
        return 1;
    }else{
        return 0;
    }
}


int main() {
    int m,H,k,x=0;
	cin>>m;
    tab vect[m];
    while(x<m){//preenchimento da tabela com valores vazios
        vect[x].k=-1;
        vect[x].status=0;
        x++;
    }
    x=0;
	cin>>H;
	while(H!=5){
	    if(H==1){
	      cin>>k;
	      HASHINSERT(vect,m,k);
	    }else if(H==2){
	      cin>>k;
	      x=hash_search(vect,m,k);
	      cout<<x<<endl;
	    }else if(H==3){
          cin>>k;
          hash_remove(vect,m,k);
	    }else if(H==4){
          x=0;
          while(x<m){
              cout<<vect[x].k<<" ";
              x++;
          }
          cout<<endl;
	    }
	    cin>>H;
	}
	cout<<endl;
    return 0;
}