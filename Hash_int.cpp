#include <iostream>
 
using namespace std;

struct tab{//stuct da tabela
        int k;
        int status;
    };

int hash_aux(int k, int m){
    int H;
    H=k%m;
    if(H<0){
        H=H+m;
    }
    return H;
}

int hash1(int k, int i, int m){
    int H;
    H =(hash_aux(k,m)+i)%m;
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

int main() {
    int m,H,x=0;
    cin>>m;
    tab vect[m];
    while(x<m){//preenchimento da tabela com valores vazios
        vect[x].k=-1;
        vect[x].status=0;
        x++;
    }
    x=0;
    cin>>H;
    while(H!=0){//preenchimento da tabela com as chaves
		HASHINSERT(vect,m,H);
		cin>>H;
	}
	while(x<m){
		cout<<vect[x].k<<" ";
		x++;
	}
	cout<<endl;
    return 0;
}