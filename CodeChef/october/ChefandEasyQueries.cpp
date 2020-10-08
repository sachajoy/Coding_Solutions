#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k, days = 1;
        cin >> n >> k;
        ll arr[n];
        for(ll i=0; i<n; i++)  cin >> arr[i];
        ll sum = 0;
        for(ll i=0; i<n; i++){
            sum += arr[i];
            if(sum < k)
                break;
            days++;
            sum -= k;
        }
        days += sum/k;
        cout << days << endl;
    }
}