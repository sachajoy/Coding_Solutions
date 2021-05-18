#include <bits/stdc++.h>
using namespace std;

int v, e;
stack<int> st;
set<int> visited;

void dfs(vector<int> *edges, int start)
{
    visited.insert(start);
    for (int i = 0; i < edges[start].size(); i++)
    {
        int vertex = edges[start][i];
        if (visited.count(vertex) == 0)
        {
            dfs(edges, vertex);
        }
    }
    st.push(start);
}
void dfs2(vector<int> *edges, int start, set<int> *comp)
{
    visited.insert(start);
    comp->insert(start);
    for (int i = 0; i < edges[start].size(); i++)
    {
        int vertex = edges[start][i];
        if (visited.count(vertex) == 0)
        {
            dfs2(edges, vertex, comp);
        }
    }
}
set<set<int> *> *getscc(vector<int> *edges, vector<int> *edgesT)
{
    for (int i = 0; i < v; i++)
    {
        if (visited.count(i) == 0)
        {
            dfs(edges, i);
        }
    }
    visited.clear();
    set<set<int> *> *ans = new set<set<int> *>();
    while (!st.empty())
    {
        int vertex = st.top();
        st.pop();
        if (visited.count(vertex) == 0)
        {
            set<int> *comp = new set<int>();
            dfs2(edgesT, vertex, comp);
            ans->insert(comp);
        }
    }
    return ans;
}
void solve()
{
    cin >> v;
    if (v == 0)
        return;
    cin >> e;
    vector<int> *edges = new vector<int>[v];
    vector<int> *edgesT = new vector<int>[v];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    set<set<int> *> *scomp = getscc(edges, edgesT);
    set<set<int>*>::iterator it1 = scomp->begin();
    vector<int> ans;
    while(it1 != scomp->end())
    {
        bool flag = true;
        set<int>::iterator it2 = (*it1)->begin();
        while(it2 != (*it1)->end())
        {
            int vertex = *it2;
            for(int i=0; i<edges[vertex].size(); i++)
            {
                int temp = edges[vertex][i];
                if( (*it1)->count(temp) == 0 ){
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
            it2++;
        }
        if(flag){
            set<int>::iterator it2 = (*it1)->begin();
            while(it2 != (*it1)->end()){
                ans.push_back(*it2);
                it2++;
            }
        }
        it1++;
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}