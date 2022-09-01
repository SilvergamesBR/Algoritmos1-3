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

void preOrdem (treenodeptr arvore){
	if (arvore != NULL){
		cout << arvore->info << endl;
		preOrdem(arvore->esq);
		preOrdem(arvore->dir);
	}
}

void emOrdem (treenodeptr arvore){
	if (arvore != NULL){
		emOrdem(arvore->esq);
		cout << arvore->info << endl;
		emOrdem(arvore->dir);
	}
}

void posOrdem (treenodeptr arvore){
	if (arvore != NULL){
		posOrdem(arvore->esq);
		posOrdem(arvore->dir);
		cout << arvore->info << endl;
	}
}

void contaNosPosOrdem (int &n,treenodeptr arvore){
	if(arvore != NULL){
		contaNosPosOrdem(n,arvore->esq);
		contaNosPosOrdem(n,arvore->dir);
		n++;
	}
}

int contaNos(treenodeptr arvore){
	int n=0;
	contaNosPosOrdem(n,arvore);
	return n;
}

treenodeptr menorNo (treenodeptr arvore){
	if(arvore->esq != NULL){
		return menorNo(arvore->esq);
	}else{
		return arvore;
	}
}

treenodeptr maiorNo (treenodeptr arvore){
	if(arvore->dir != NULL){
		return maiorNo(arvore->dir);
	}else{
		return arvore;
	}
}

void contaNfolhas (int &n,treenodeptr arvore){
	if(arvore != NULL){
		contaNfolhas(n,arvore->esq);
		contaNfolhas(n,arvore->dir);
		if(arvore->esq == NULL && arvore->dir == NULL){
			n++;
		}
	}
}

int nFolhas(treenodeptr arvore){
	int n=0;
	contaNfolhas(n,arvore);
	return n;
}

int main(){
	treenodeptr arvore = NULL;//ponteiro para a raiz 
	int n;//variavel auxiliar para saida de dados
	int x;//var aux x p/ inserçao de dados
	
	cin>>x;
	
	while(x!= -1){
		tInsere(arvore,x);
		cin>>x;
	}
	
	emOrdem(arvore);
	
	cout<<n;
	return 0;
}