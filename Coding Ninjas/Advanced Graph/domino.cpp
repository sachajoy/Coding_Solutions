#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> *edges, int *visited, int n, int start, stack<int> &finishedVertices)
{
    // cout << "dfs:" << start << endl;
    visited[start] = 1;
    for (int i = 0; i < edges[start].size(); i++)
    {
        int element = edges[start][i];
        if (visited[element] == 0)
        {
            dfs(edges, visited, n, element, finishedVertices);
        }
    }
    finishedVertices.push(start);
}

void dfs2(vector<int> *edges, unordered_set<int> *component, int *visited, int n, int start)
{
    visited[start] = 1;
    component->insert(start);
    for (int i = 0; i < edges[start].size(); i++)
    {
        int element = edges[start][i];
        if (visited[element] == 0)
        {
            dfs2(edges, component, visited, n, element);
        }
    }
}

unordered_set<unordered_set<int> *> *getStrongComponents(vector<int> *edges, vector<int> *edgesT, int n)
{
    int *visited = new int[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    unordered_set<unordered_set<int> *> *output = new unordered_set<unordered_set<int> *>();
    stack<int> finishedVertices;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            dfs(edges, visited, n, i, finishedVertices);
        }
    }
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    while (!finishedVertices.empty())
    {
        unordered_set<int> *component = new unordered_set<int>();
        int element = finishedVertices.top();
        if (visited[element] == 0)
            dfs2(edgesT, component, visited, n, element);
        finishedVertices.pop();
        output->insert(component);
    }
    return output;
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> *edges = new vector<int>[n];
    vector<int> *edgesT = new vector<int>[n];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        edges[a - 1].push_back(b - 1);
        edgesT[b - 1].push_back(a - 1);
    }
    unordered_set<unordered_set<int> *> *all_components = getStrongComponents(edges, edgesT, n);
    unordered_set<unordered_set<int> *>::iterator it = all_components->begin();
    while (it != all_components->end())
    {
        unordered_set<int>::iterator it2 = (*it)->begin();
        while (it2 != (*it)->end())
        {
            cout << *it2 + 1 << " ";
            it2++;
        }
        cout << endl;
        it++;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}