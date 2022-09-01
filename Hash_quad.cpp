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

int hash1(int k, int i, int m,int c1,int c2){
    int H;
    H =(hash_aux(k,m)+(c1*i)+(c2*i*i))%m;
    return H;
}

int HASHINSERT(tab *T,int m, int k,int c1,int c2){
    int j;
	int i = 0;
    while (i<m){
        j = hash1(k,i,m,c1,c2);
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

int HASH_SEARCH(tab *T,int m,int k,int c1,int c2){//no falcon estava dando erro como HASH-SEARCH, entao substitui por HASH_SEARCH
    int i=0;
    int j;
    do{
        j = hash1(k,i,m,c1,c2);
        if (T[j].k == k){
            return j;
		}else{
        	i++;
		}
	}while (T[j].status!=0 || i<m);
    return -1;
}

int main() {
	tab vect[100];//criacao do vetor de structs para o hashing
    int k,m,c1,c2;//criacao das variaveis de parametros para o hashing
    int x=0;//varavei auxiliar contadora
    int auxsearch;//variavel auxialiar para armazenar o resultado da chamada da funcao HASH_SEARCH
	cin>>m;//entrada de dados
    cin>>c1;
    cin>>c2;
    while(x<m){//preenchimento da tabela com valores vazios
        vect[x].k=-1;
        vect[x].status=0;
        x++;
    }
    x=0;
    cin>>k;
    while(k!=0){//loop para inserir os valores no vetor de hashing
		HASHINSERT(vect, m, k, c1, c2);
		cin>>k;
	}
	cin>>k;
	auxsearch=HASH_SEARCH(vect, m, k, c1, c2);//chamada da funcao de busca
	if(auxsearch == -1){//logica de saida do resultado da funcao de busca
		cout<<"Chave "<<k<<" nao encontrada";
	}else{
		cout<<"Chave "<<k<<" encontrada na posicao "<<auxsearch;
	}
	cout<<endl;
    return 0;
}