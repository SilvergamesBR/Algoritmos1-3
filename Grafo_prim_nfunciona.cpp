#include <iostream>
#include <list>
#include <climits>

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

void prim(list<no>adj[], int nVertices, int start){
    int X=0,Y=0,Z=0;
    int destino=0, weight=0,dist=0;
    int *adjacente;
    bool *intree;
    int *distance;
    int *parent;
    intree = new bool[nVertices];
    distance = new int[nVertices];
    parent = new int[nVertices];
    adjacente = new int[nVertices];
    list<no>::iterator p;
    while(X<nVertices){
        intree[X] = false;
        distance[X] = INT_MAX;
        parent[X] = -1;
        X++;
    }
    distance[start] = 0;
    X = start;
    while(intree[X] == false){
        intree[X] = true;
        while(X < 10){
            destino = p->v;
            weight = p->peso;
            if(distance[destino] > weight && intree[destino]==false){
                distance[destino] = weight;
                parent[destino] = X;
            }
            X++;
        }
        X = 0;
        dist = INT_MAX;
        while(Y<nVertices){
            if(intree[Y]==false && dist>distance[Y]){
                dist = distance[Y];
                X = Y;
                adjacente[Y]=X;
            }
            Y++;
        }
    }
    Y=start;
    X=1;
    cout<<"Arvoce\nGeradora\nMinima:\n";
    while(X<nVertices){
        cout<<parent[X]<<" "<<adjacente[X]<<endl;
        X++;
    }
    X=0;
    dist =0;
    while(X<nVertices){
        dist += distance[X];
        X++;
    }
    cout<<"Custo: "<<dist;
}

int main(){
    list<no> adj[10]; // lista de adjacencia    
    int u, v; // vertices de origem e destino de cada aresta    
    int peso; // peso da aresta    
    int nVertices = 1; // numero de vertices do grafo    
    int i; // contador    
    list<no>::iterator p; // iterador para varrer a lista de adjacência    
    int orientado = 0; // 1:orientado, 0:não orientado  
    int start=0;
    cin>>nVertices>>orientado>>start;
    cin>>u>>v>>peso;
    while(u!= -1 && v != -1 && peso != -1){
        cria_aresta(adj,u,v,peso,orientado);
        cin>>u>>v>>peso;
    }
    prim(adj,nVertices,start);
    // Mostrando o grafo    cout << "Lista de adjacencia" << endl;
    /*for(i = 0; i < nVertices; i++)
        for(p = adj[i].begin(); p != adj[i].end(); p++)
            cout << i << " " << p->v << " " << p->peso << endl;
    return 0;
    */
}