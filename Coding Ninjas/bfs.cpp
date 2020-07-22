
#include <bits/stdc++.h>
using namespace std;
void print(int** edges, int n, int* visited, int sv){
	queue<int> q;
    q.push(sv);
    visited[sv] = 1;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout << temp << " ";
        visited[temp] = 1;
        for(int i=0; i<n; i++){
            if(edges[temp][i] == 1){
                if(!visited[i]){
                    q.push(i);
                }
            }
        }
    }
}
int main(){
	int n, e;
	cin>>n>>e;
	int** edges = new int*[n];
	for (int i = 0; i < n; ++i){
		edges[i] = new int[n];
		for (int j = 0; j < n; ++j)
		{
			edges[i][j] = 0;
		}
	}
	int* visited = new int[n];
	for (int i = 0; i < n; ++i){
		visited[i] = 0;
	}
	for (int i = 0; i < e; ++i){
		int a, b;
		cin>>a>>b;
		edges[a][b] = 1;
		edges[b][a] = 1;
	}
	print(edges, n, visited, 0);
	return 0 ; 
}