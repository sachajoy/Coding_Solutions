#include <bits/stdc++.h>
using namespace std;
#define MOD int(ie9 + 7)
typedef long long ll;
int n;
void solve()
{
    cin >> n;
    vector<int> ans;
    map<ll, ll> m;
    ll premod = 1;
    ans.push_back(1);
    for(int i=2; i<n; i++){
        if(__gcd(i,n) == 1){
            ans.push_back(i);
            m[i]++;
            premod = (premod * i)%n;
        }
    }
    if(m.find(premod) != m.end()){
        sort(ans.begin(), ans.end());
        cout << ans.size()-1 << endl;
        for(int i=0; i<ans.size(); i++){
            if(ans[i] == premod){
                continue;
            }
            cout << ans[i] << " ";
        }
    }else{
        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
    }
    
}

int main()
{
   
        solve();
    
    return 0;
}