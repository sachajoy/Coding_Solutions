#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll work(ll sum){
    return (ll)(-1.0 + sqrt(1.0 + 4*(sum)))/2.0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll sum = n*(n+1)/2;
        ll pivot = work(sum);
        ll ans = (n - pivot);
        if(pivot*(pivot+1)/2 == sum/2){
            ans += (pivot * (pivot - 1)/2) + (n-pivot)*(n-pivot-1)/2;
        }
        cout << ans << endl;
    }
}