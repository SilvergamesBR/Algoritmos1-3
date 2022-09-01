#include <iostream>
#include <list>

using namespace std;

struct no{
    int v; // vertice de destino da aresta    
    int peso; // peso da aresta
};

void cria_aresta( list<no> adj[], int u, int v, int p, int orientado ){
    no aux; // var aux para inserir as arestas em adj
    aux.v = v;
    aux.peso = p;
    adj[u].push_back(aux);
    if(orientado == 0){
            aux.v = u;
            adj[v].push_back(aux);
    }
}

void bfs(list<no>adj[], int nVertices, int s){
	int x=0; //variavel contadora
	int y;
	int *p;
	int *status;
	list<int> Q;
	list<no>::iterator it;
	p = new int[nVertices];
	status = new int[nVertices];
	while(x<nVertices){
		if(x != s){//setando os status de todos menos do no inicial como undiscovered e o pai como null
			status[x]= -1;
			p[x]= -1;
		}
		x++;
	}
	status[s]= 0;
	p[s]= -1;
	Q.push_back(s);
	while(!Q.empty()){
		x=Q.front();
		Q.pop_front();
		cout<<x<<endl;
		it=adj[x].begin();
		while(it != adj[x].end()){
			y = it -> v;
			cout<<x<<" "<<y<<endl;
			if(status[y] == -1){
				status[y]=1;//descoberto
				p[y]=x;
				Q.push_back(y);
			}
			it++;
		}
		status[x] = 1;//processado
	}
}

int main(){
    list<no> adj[10]; // lista de adjacencia    
    int u, v; // vertices de origem e destino de cada aresta    
    int peso; // peso da aresta    
    int nVertices = 1; // numero de vertices do grafo    
    //int i; // contador    
    //list<no>::iterator p; // iterador para varrer a lista de adjacência    
    int orientado = 0; // 1:orientado, 0:não orientado  
    int vertInici = 0;
    cin>>nVertices>>vertInici;
    cin>>u>>v>>peso;
    while(u!= -1 && v != -1 && peso != -1){
        cria_aresta(adj,u,v,peso,orientado);
        cin>>u>>v>>peso;
    }
    // Mostrando o grafo    cout << "Lista de adjacencia" << endl;
    /*for(i = 0; i < nVertices; i++)
        for(p = adj[i].begin(); p != adj[i].end(); p++)
            cout << i << " " << p->v << " " << p->peso << endl;
    */
    bfs(adj,nVertices,vertInici);
    return 0;
}