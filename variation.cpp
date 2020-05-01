#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    ll x;
    for(ll i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll count = 0;
    for(ll i=0; i<n; i++){
        ll temp = v[i];
        ll start = i+1, end = n-1;
        ll index = i;
        while(start <= end){
            ll mid = start + (end - start)/2;
            if(abs(v[i] - v[mid]) >= k){
                index = mid;
                end = mid-1;
            }else{
                start = mid + 1;
            }
            // cout << "i-" <<  index << endl;
        }
        if(index != i)
            count += (n-index);
        // cout << count << endl;
    }
    cout << count;
}