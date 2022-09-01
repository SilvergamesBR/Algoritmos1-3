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

/*int HASHINSERT(tab *T,int m, int k){
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
}*/

int main() {
    int m,H,k,x=0;
    cin>>k;
	cin>>m;
    tab vect[m];
    while(x<m){//preenchimento da tabela com valores vazios
        vect[x].k=-1;
        vect[x].status=0;
        x++;
    }
    x=0;
	while(x<m){
	    H=hash1(k,x,m);
	    cout<<H<<" ";
	    x++;
	}
	cout<<endl;
    return 0;
}