#include <iostream>
#include <list>
#include <iomanip>


using namespace std;

struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};
typedef treenode* treenodeptr;

treenodeptr tPesq(treenodeptr p, int x)
{
	if (p == NULL) // elemento não encontrado
		return NULL;
	else if (x == p->info) // elemento encontrado na raiz
		return p;
	else if (x < p->info) // procura na sub arvore esquerda
		return tPesq(p->esq, x);
	else  // procura na sub ´arvore direita
		return tPesq(p->dir, x);
}

void tInsere(treenodeptr &p, int x)
{
	if (p == NULL)  // insere na raiz
	{
		p = new treenode;
		p->info = x;
		p->esq = NULL;
		p->dir = NULL;
	}
	else if (x < p->info)   // insere na subarvore esquerda
	{
		tInsere(p->esq, x);
	}
	else             // insere na subarvore direitat
	{
		tInsere(p->dir, x);
	}
}

void preOrdem (treenodeptr arvore)
{
	if (arvore != NULL)
	{
		cout << arvore->info << endl;
		preOrdem(arvore->esq);
		preOrdem(arvore->dir);
	}
}

void emOrdem (treenodeptr arvore)
{
	if (arvore != NULL)
	{
		emOrdem(arvore->esq);
		cout << arvore->info << endl;
		emOrdem(arvore->dir);
	}
}

void posOrdem (treenodeptr arvore)
{
	if (arvore != NULL)
	{
		posOrdem(arvore->esq);
		posOrdem(arvore->dir);
		cout << arvore->info << endl;
	}
}

void contaNosPosOrdem (int &n, treenodeptr arvore)
{
	if(arvore != NULL)
	{
		contaNosPosOrdem(n, arvore->esq);
		contaNosPosOrdem(n, arvore->dir);
		n++;
	}
}

int contaNos(treenodeptr arvore)
{
	int n = 0;
	contaNosPosOrdem(n, arvore);
	return n;
}

treenodeptr menorNo (treenodeptr arvore)
{
	if(arvore->esq != NULL)
	{
		return menorNo(arvore->esq);
	}
	else
	{
		return arvore;
	}
}

treenodeptr maiorNo (treenodeptr arvore)
{
	if(arvore->dir != NULL)
	{
		return maiorNo(arvore->dir);
	}
	else
	{
		return arvore;
	}
}

void contaNfolhas (int &n, treenodeptr arvore)
{
	if(arvore != NULL)
	{
		contaNfolhas(n, arvore->esq);
		contaNfolhas(n, arvore->dir);
		if(arvore->esq == NULL && arvore->dir == NULL)
		{
			n++;
		}
	}
}


void fazMedia(treenodeptr arvore, float &med){
	if(arvore!= NULL){
		fazMedia(arvore->esq,med);
		fazMedia(arvore->dir,med);
		med += arvore->info;
	}
}

float media(treenodeptr arvore){
	int n=0;
	float med = 0;
	fazMedia(arvore,med);
	n = contaNos(arvore);
	med = med/n;
	return med;
}

int nFolhas(treenodeptr arvore)
{
	int n = 0;
	contaNfolhas(n, arvore);
	return n;
}

void camPos(treenodeptr arvore,int &n,int x, int &resPos){
	if (arvore != NULL)
	{
		camPos(arvore->esq,n,x,resPos);
		camPos(arvore->dir,n,x,resPos);
		n++;
		if(arvore->info == x){
			resPos=n;
		}
	}
}

void camPre(treenodeptr arvore,int &n,int x,int &resPre){
	if (arvore != NULL)
	{
		n++;
		if(arvore->info == x){
			resPre=n;
		}
		camPre(arvore->esq,n,x,resPre);
		camPre(arvore->dir,n,x,resPre);
		
	}
}

void camEm(treenodeptr arvore,int &n,int x,int &resEm){
	if (arvore != NULL)
	{
		camEm(arvore->esq,n,x,resEm);
		n++;
		if(arvore->info == x){
			resEm=n;
		}
		camEm(arvore->dir,n,x,resEm);
	}
}

void menorCaminho(treenodeptr arvore,int x){
	int nPos=0;
	int resPos=0;
	int nPre=0;
	int resPre=0;
	int nEm=0;
	int resEm=0;
	camPos(arvore,nPos,x,resPos);
	camPre(arvore,nPre,x,resPre);
	camEm(arvore,nEm,x,resEm);
	if(resPos < resEm){
		if(resPos < resPre){
			cout<<"Pos\n";
		}else{
			cout<<"Pre\n";
		}
	}else if(resPre < resEm){
		cout<<"Pre\n";
	}else{
		cout<<"Em\n";
	}
}

void tDestruir (treenodeptr &arvore)
{
	if (arvore != NULL)
	{
		tDestruir(arvore->esq);
		tDestruir(arvore->dir);
		delete arvore;
	}
	arvore = NULL;
}

treenodeptr tMenor(treenodeptr &raiz)
{
	treenodeptr t;
	t = raiz;
	if (t->esq == NULL){  // encontrou o menor valor
		raiz = raiz->dir;
		return t;
	}
	else{} // continua a busca na sub ´arvore esquerda
		return tMenor(raiz->esq);
}

int tRemove(treenodeptr &raiz, int x){
	treenodeptr p;
	if (raiz == NULL){ //  ´arvore vazia
		return 1;
	}
	if (x == raiz->info){
		p = raiz;
		if (raiz->esq == NULL){ // a raiz n~ao tem filho esquerdo
			raiz = raiz->dir;
		}else if (raiz->dir == NULL){ // a raiz n~ao tem filho direito
			raiz = raiz->esq;
		}else{
			p = tMenor(raiz->dir);
			raiz->info = p->info;
		} // a raiz tem ambos os filhos
		delete p;
		return 0;
	}else if (x < raiz->info){
		return tRemove(raiz->esq,x);
	}else{
		return tRemove(raiz->dir,x);
	}
}

void emNivel(treenodeptr t){
	   treenodeptr n;
	   list<treenodeptr> q;
	   if(t!=NULL){
		   q.push_back(t);
		   while(!q.empty()){
			   n = *q.begin();
			   q.pop_front();
			   if(n->esq != NULL){
				   q.push_back(n->esq);   
			   }
			   if(n->dir != NULL){
				   q.push_back(n->dir);
			   }
			   cout<<n->info<<' ';
			}
			cout<<endl;
	   }
	   tDestruir(n);	
}

int main()
{
	treenodeptr arvore = NULL;//ponteiro para a raiz
	int x;//var aux x p/ inserçao de dados
	cin >> x;

	while(x != -1)
	{
		tInsere(arvore, x);
		cin >> x;
	}
	
	emNivel(arvore);
	
	tDestruir(arvore);
	return 0;
}
