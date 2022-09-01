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

int main(){
    list<no> adj[10]; // lista de adjacencia    
    int u, v; // vertices de origem e destino de cada aresta    
    int peso; // peso da aresta    
    int nVertices = 1; // numero de vertices do grafo    
    int i; // contador    
    list<no>::iterator p; // iterador para varrer a lista de adjacência    
    int orientado = 0; // 1:orientado, 0:não orientado  
    cin>>nVertices>>orientado;
    cin>>u>>v>>peso;
    while(u!= -1 && v != -1 && peso != -1){
        cria_aresta(adj,u,v,peso,orientado);
        cin>>u>>v>>peso;
    }
    // Mostrando o grafo    cout << "Lista de adjacencia" << endl;
    for(i = 0; i < nVertices; i++)
        for(p = adj[i].begin(); p != adj[i].end(); p++)
            cout << i << " " << p->v << " " << p->peso << endl;
    return 0;
}