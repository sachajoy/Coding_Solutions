#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

ll helper(vector<char> u, vector<char> v){
    set<char> s(u.begin(), u.end());
    ll temp =0;
    for(auto x:v){
        if(s.find(x) != s.end()){
            temp++;
        }
    }
    return temp;
}

int n;
void solve()
{
    cin >> n;
    map<string, vector<char>> m;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s.length() > 0){
            m[s.substr(1)].push_back(s[0]);
        }
    }
    ll ans=0;
    for(auto i:m){
        for(auto j:m){
            if(i.first != j.first){
                ll temp = helper(i.second, j.second);
                ans += (i.second.size()-temp) * (j.second.size()-temp);
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}