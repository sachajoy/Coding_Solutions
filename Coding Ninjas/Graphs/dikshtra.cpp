#include <bits/stdc++.h>
using namespace std;

int get_min_vertex(int* visited, int* weight, int n){
    int min_vertex = -1;
    for(int i=0; i<n; i++){
        if(!visited[i] && (min_vertex == -1 || weight[min_vertex] > weight[i])){
            min_vertex = i;
        }
    }
    return min_vertex;
}
void dikshtra(int** edges, int n){
    int* visited = new int[n];
    for(int i=0; i<n; i++){
        visited[i] = 0;
    }
    int* weight = new int[n];
    for(int i=0; i<n; i++){
        weight[i] = INT_MAX;
    }
    weight[0] = 0;
    for(int i=0; i<n; i++){
        int min_vertex = get_min_vertex(visited, weight, n);
        visited[min_vertex] = 1;
        for(int j=0; j<n; j++){
            if(i!=j && !visited[i] && edges[min_vertex][j] != 0){
                weight[j] = min(weight[j], weight[min_vertex] + edges[min_vertex][j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << i << " " << weight[i] << endl;
    }
}
int main()
{
  int n, e;
	cin >> n >> e;
	int** edges = new int* [n];
	for (int i = 0; i < n; i++)
	{
		edges[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			edges[i][j] = 0;
		}
	}
	for (int i = 0; i < e; i++)
	{
		int f, s, weight;
		cin >> f >> s >> weight;
		edges[f][s] = weight;
		edges[s][f] = weight;
	}
	dikshtra(edges, n);
	for (int i = 0; i < n; i++)
	{
		delete[]edges[i];
	}
	delete[]edges;
}
