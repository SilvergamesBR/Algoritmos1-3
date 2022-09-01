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
	j = hash1(k,i,m);
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
        cout<<"foi remove ";
    }else{
        return 0;
    }
}

int main() {
    int m,k,x=0;//criacao das variaveis de parametros para as funcoes de hashing
	cin>>m;
    tab vect[100];//declaracao do vetor de hash
    while(x<m){//preenchimento da tabela com valores vazios
        vect[x].k=-1;
        vect[x].status=0;
        x++;
    }
    x=0;
	cin>>k;
	while(k != 0){//preenchimento do vetor pelos parametros do exercicio
		HASHINSERT(vect, m, k);
		cin>>k;
	}
	cin>>k;
	hash_remove(vect, m, k);//chamada da funcao de remocao
	x=0;
	while(x < m){//output do vetor
		cout<<vect[x].k<<" ";
		x++;
	}
	cout<<endl;
    return 0;
}