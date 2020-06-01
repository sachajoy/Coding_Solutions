#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>>v;
        int x,y;
        for(int i=0; i<n; i++){
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }
        sort(v.begin(), v.end());
        for(int i=0; i<m; i++){
            int a;
            cin >> a;
            int ans = -1;
            int index = lower_bound(v.begin(), v.end(), make_pair(a, 0)) - v.begin();
            if(index == 0){
                ans = v[0].first - a;
            }else if(v[index - 1].second > a){
                ans = 0;
            }else if(index < n) {
                ans = v[index].first - a;
            }
            cout << ans << endl;
        }

    }
}