#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll count = 0;
    for(int i=0; i<n; i++){
        ll time = 0, q;
        for(int j=0; j<k; j++){
             ll temp;
            cin >> temp;
            time += temp;
        }
        cin >> q;
        if(time >= m && q <= 10){
            count++;
        }
    }
    cout << count;
}