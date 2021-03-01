#include<bits/stdc++.h>
using namespace std;

void dfs(int** graph, int n, int* visited, unordered_set<int>* component, int start){
    visited[start] = 1;
    component->insert(start);
    for(int i=0; i<n; i++){
        if(visited[i] != 1 && graph[start][i] == 1){
            dfs(graph, n, visited, component, i);
        }
    }
}

unordered_set<unordered_set<int>*>* getComponents(int** graph, int n){
    int* visited = new int[n];
    for(int i=0; i<n; i++){
        visited[i] = 0;
    }
    unordered_set<unordered_set<int>*>* output = new unordered_set<unordered_set<int>*>();
    for(int i=0; i<n; i++){
        if(visited[i] == 0){
            unordered_set<int>* component = new unordered_set<int>();
            dfs(graph, n, visited, component, i);
            output->insert(component);
        }
    }
    return output; 
}


int main(){
    int n, m;
    cin >> n;
    int** graph = new int*[n];
    for(int i=0; i<n; i++){
        graph[i] = new int[n];
        for(int j=0; j<n; j++){
            graph[i][j] = 0;
        }
    }
    cin >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        graph[a-1][b-1] = 1;
        graph[b-1][a-1] = 1;
    }
    unordered_set<unordered_set<int>*>* all_components = getComponents(graph, n);
    unordered_set<unordered_set<int>*>::iterator it = all_components->begin();
    while(it != all_components->end()){
        unordered_set<int>::iterator it2 = (*it)->begin();
        while(it2 != (*it)->end()){
            cout << *it2+1 << " ";
            it2++;
        }
        cout << endl;
        it++;
    }

}