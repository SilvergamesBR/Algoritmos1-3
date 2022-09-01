#include <iostream>
#include <list>
#include <climits>

using namespace std;

struct no{
	int v;
	int peso;
};


void cria_aresta(list<no>adj[], int u, int v, int orientado){
	no aux;
	aux.v = v;
	adj[u].push_back(aux);
	if(orientado == 0){
		aux.v = u;
		adj[v].push_back(aux);
	}
}

void ordenacao_topologica(int f[], int nVertices)
{
	int aux[50];
	int i;
	int a;
	int b;
	for(i = 0; i < nVertices; i++){
		aux[i] = i;
	}
	for(a = 0; a < nVertices; a++){
		for(i = a + 1; i < nVertices; i++){
			if(f[aux[a]] < f[aux[i]]){
				b = aux[a];
				aux[a] = aux[i];
				aux[i] = b;
			}
		}
	}
	for(i = 0; i < nVertices; i++){
		cout << aux[i] << " ";
	}
	cout << endl;
}

void DFSVISIT(list<no>adj[], int nVertices, char color[] , int D[] , int F[] , int pi[] , int &time , int u){
	list<no>::iterator v;
	color[u] = 'G';
	time = time + 1;
	D[u] = time;
	for(v = adj[u].begin(); v != adj[u].end(); v++){
		if (color[v -> v] == 'W'){
			pi[v -> v] = u;
			DFSVISIT(adj, nVertices, color, D, F, pi, time, v -> v);
		}
	}
	color[u] = 'B';
	time = time + 1;
	F[u] = time;
}

void dfs(list<no>adj[], int nVertices){
	int u;
	char color[50];
	int pi[50];
	int time;
	int D[50];
	int F[50];
	for (u = 0; u < nVertices; u++){
		color[u] = 'W';
		pi[u] = -1;
	}
	time = 0;
	for (u = 0; u < nVertices; u++){
		if(color[u] == 'W'){
			DFSVISIT(adj, nVertices, color, D, F, pi, time, u);
		}
	}
	ordenacao_topologica(F, nVertices);
}

int main()
{
	list<no>adj[50];//lista
	int u, v;//origem e destino da aresta
	int orientado;// 1:orientado, 0:nao orientado
	int nVertices;// numero de vertices do grafo

	cin >> nVertices >> orientado;// lendo o numero de vertices

	cin >> u >> v;//lendo origem,aresta e peso

	while(u != -1 && v != -1)
	{
		cria_aresta(adj, u, v, orientado);
		cin >> u >> v;
	}

	dfs(adj, nVertices);

	return 0;
}