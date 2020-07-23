#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
    int src;
    int dest;
    int wt;
};

bool compare(Edge e1, Edge e2){
    return e1.wt < e2.wt;
}

int get_parent(int vertex, int* parent){
    if(parent[vertex] == vertex){
        return vertex;
    }
    int curr_p = parent[vertex];
    return get_parent(curr_p, parent);
}
Edge* kruskals(Edge* edges, int n, int E){
    Edge* output = new Edge[n-1];
    int count=0;
    int* parent = new int[n];
    for(int i=0; i<n; i++)
        parent[i] = i;
    int i=0;
    while(count < n-1){
        Edge curr_edge = edges[i];
        int srcp = get_parent(curr_edge.src, parent);
        int destp = get_parent(curr_edge.dest, parent);
        if(srcp != destp){
            output[count] = curr_edge;
            count++;
            parent[srcp] = destp;
        }
        i++;
    }
    return output;
}
int main(){
    int n, e;
    cin >> n >> e;
    Edge* edges = new Edge[e];
    for(int i=0; i<e; i++){
        int src, dest, wt;
        cin >> src >> dest >> wt;
        edges[i].dest = dest;
        edges[i].src = src;
        edges[i].wt = wt;
    }
    sort(edges, edges+e, compare);
    Edge* mst = kruskals(edges, n, e);
    for(int i=0; i<n-1; i++){
        int v1 = max(mst[i].dest, mst[i].src);
        int v2 = min(mst[i].dest, mst[i].src);
        cout << v2 << " " << v1 << " " << mst[i].wt << endl;
    }
    
}