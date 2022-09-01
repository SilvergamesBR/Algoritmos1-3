#include <iostream>

using namespace std;

struct treenode{
	int info;
	treenode *esq;
	treenode *dir;
};
typedef treenode* treenodeptr;

treenodeptr tPesq(treenodeptr p, int x){
	if (p == NULL) // elemento não encontrado
		return NULL;
	else if (x == p->info) // elemento encontrado na raiz
		return p;
	else if (x < p->info) // procura na sub arvore esquerda
		return tPesq(p->esq,x);
	else  // procura na sub ´arvore direita
		return tPesq(p->dir,x);
}

void tInsere(treenodeptr &p, int x){
	if (p == NULL){ // insere na raiz
		p = new treenode;
		p->info = x;
		p->esq = NULL;
		p->dir = NULL;
	}else if (x < p->info){ // insere na subarvore esquerda
		tInsere(p->esq,x);
	}else{           // insere na subarvore direitat
		tInsere(p->dir,x);
	}
}

int main(){
	treenodeptr arvore = NULL;//ponteiro para a raiz 
	int x;//var aux x p/ inserçao de dados
	treenodeptr aux;
	
	tInsere(arvore,14);
	tInsere(arvore,4);
	tInsere(arvore,18);
	
	x=17;
	aux = tPesq(arvore,x);
	
	if(aux != NULL){
		cout<<aux->info<<endl;
	}else{
		cout<<x<<" nao foi encontrado"<<endl;
	}
	
	cout<<"raiz: "<<arvore->info<<endl;//saida da arvore
	cout<<"filho esquerdo: "<<(arvore->esq)->info<<endl;
	cout<<"filho direito: "<<(arvore->dir)->info<<endl;
	
	return 0;
}