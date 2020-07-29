#include <bits/stdc++.h>
using namespace std;

void dfs(int **edges, int n, int start, int *visited, unordered_set<int> *comp)
{
    visited[start] = 1;
    comp->insert(start);
    for (int i = 0; i < n; i++)
    {
        if (edges[start][i] != 0 && !visited)
        {
            dfs(edges, n, start, visited, comp);
        }
    }
}

unordered_set<unordered_set<int> *> *components(int **edges, int n)
{
    int *visited = new int[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    unordered_set<unordered_set<int> *> *output = new unordered_set<unordered_set<int> *>();
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            unordered_set<int> *comp = new unordered_set<int>();
            dfs(edges, n, i, visited, comp);
            output->insert(comp);
        }
    }
    return output;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int *p = new int[n];
        int *q = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> q[i];
        }
        int **edges = new int *[n];
        for (int i = 0; i < n; i++)
        {
            edges[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                edges[i][j] = 0;
            }
        }
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            edges[a][b] = 1;
            edges[b][a] = 1;
        }
        unordered_set<unordered_set<int> *> *ans = components(edges, n);
        unordered_set<unordered_set<int> *>::iterator it1 = ans->begin();

        bool flag = true;
        while (it1 != ans->end())
        {
            unordered_set<int> *comp = *it1;
            unordered_set<int>::iterator it2 = comp->begin();
            unordered_set<int> p_set;
            unordered_set<int> q_set;
            while (it2 != comp->end())
            {
                p_set.insert(p[*it2]);
                q_set.insert(q[*it2]);
                it2++;
            }
            if (p_set != q_set)
            {
                flag = false;
                break;
            }
            it1++;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}