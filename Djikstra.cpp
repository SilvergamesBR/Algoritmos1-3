#include<iostream>
#include<list>
#include<climits>

using namespace std;

struct no
{
	int v;
	int peso;
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	no aux;
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
	if(orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}

void dijkstra(list<no>adj[], int nVertices, int start, int end)
{
	list<no>::iterator p;
	bool  intree[50];
	int u, destino, weight;
	int v, distance[50];
	int parent[50];
	int	dist;

	for(u = 0; u < nVertices; u++)
	{
		intree[u] = false;
		distance[u] = INT_MAX;
		parent[u] = -1;
	}

	distance[start] = 0;
	v = start;

	while(intree[v] == false)
	{
		intree[v] = true;
		for(p = adj[v].begin(); p != adj[v].end(); p++)
		{
			destino = p->v;
			weight = p->peso;

			if(distance[destino] > distance[v] + weight)
			{
				distance[destino] = distance[v] + weight;
				parent[destino] = v;
			}
		}

		v = 0;
		dist = INT_MAX;

		for(u = 0; u < nVertices; u++)
		{
			if(intree[u] == false && dist > distance[u])
			{
				dist = distance[u];
				v = u;
			}
		}
	}
	
	list<int> caminho;
	int cam = end;

	while(cam != -1)
	{
		caminho.push_front(cam);
		cam = parent[cam];
	}

		  cout << "Menor caminho: ";

	while(!caminho.empty())
	{
		cout << *caminho.begin() << " ";
		caminho.pop_front();
	}
	
	cout << endl;

	cout << "Custo: " << distance[end] << endl;
}

int main()
{
	list<no>adj[50];// lista de adjacencia
	int u, v;// origem e destino da aresta
	int p;// peso da aresta u-v
	int nVertices;// numero de vertices do grafo
	int orientado;// 1:orientado, 0:nao orientado
	int start;//vertice inicial
	int end;//vertice final

	cin >> nVertices >> orientado >> start >> end;// lendo o numero de vertices e o inicial e final

	cin >> u >> v >> p;//lendo origem,aresta e peso

	while(u != -1 && v != -1 && p != -1 )
	{
		cria_aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}

	dijkstra(adj, nVertices, start, end);

	return 0;
}