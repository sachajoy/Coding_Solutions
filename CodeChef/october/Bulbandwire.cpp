#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll helper(vector<ll> mid, ll k, ll st, ll en){
    mid.push_back(st);
    mid.push_back(en);
    sort(mid.begin(), mid.end());
    k /= 2;
    ll sum =0;
    for(ll i=0; i< mid.size() - k; i++){
        sum += mid[i];
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k, total=0, st, en;
        string s;
        cin >> n >> k;
        cin >> s;
        vector<ll>mid;
        ll j=-1;
        for(ll i=0; i<n; i++){
            if(s[i] == '0' && j==-1){
                j = i;
            }else if(s[i] == '1' && j != -1){
                ll temp = i - j;
                j = -1;
                total += temp;
                if(j == 0 ){
                    st = temp;
                }else if (i == n-1){
                    en = temp;
                }else{
                    mid.push_back(temp);
                }
            }
        }
        ll ans = INT_MAX;
        en = n-1-en;
        ans = min(helper(mid, k-2, st, en), ans);
        ans = min(helper(mid, k-1, 0, en), ans);
        ans = min(helper(mid, k-1, st, 0), ans);
        ans = min(helper(mid, k, 0, 0), ans);
        cout << ans << endl;
    }
}