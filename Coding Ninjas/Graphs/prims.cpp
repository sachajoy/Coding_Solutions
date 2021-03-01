#include<bits/stdc++.h>
using namespace std;

int min_wt(int* weight, int* visited, int n){
    int wt_min=INT_MAX, v=-1;
    for(int i=0; i<n; i++){
        if(!visited[i] && wt_min > weight[i]){
            wt_min = weight[i];
            v= i;
        }
    }
    return v;
}
void prims(int** edges, int n){
    int parent[n], visited[n], weight[n];
    for(int i=0; i<n; i++){
        visited[i] = 0;
        weight[i] = INT_MAX;
    }
    parent[0] = -1;
    weight[0] = 0;
    int min_wt_ver = min_wt(weight, visited, n);
    visited[min_wt_ver] = 1;

    for(int j=0; j<n; j++){
        if(edges[min_wt_ver][j] != 0 && !visited[j]){
            if(weight[j] > edges[min_wt_ver][j]){
                weight[j] = edges[min_wt_ver][j];
                parent[j] = min_wt_ver;
            }
        }
    }
    for(int i=1; i<n; i++){
        if(parent[i] < i){
            cout << parent[i] << " " << i << weight[i]<< endl;
        }else{
            cout << i << parent[i] << " "  << weight[i]<< endl;
        }
    }

}
int main(){
    int n, e;
    cin >> n >> e;
    int** edges = new int*[n];
    for(int i=0; i<n; i++){
        edges[i] = new int[n];
        for(int j=0; j<n; i++){
            edges[i][j] = 0;
        }
    }
    for(int i=0; i<e; i++){
        int f, s, wt;
        cin >> f >> s >> wt;
        edges[f][s] = wt;
        edges[s][f] = wt;
    }
    prims(edges, n);

}