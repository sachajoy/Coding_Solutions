#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n];
        if(n == 1){
            cout << n << endl;
            continue;
        }
        if(ceil(log2(n)) == floor(log2(n))){
            cout << -1 << endl;
            continue;
        }else if (n == 3){
            arr[0] = 1;
            arr[1] = 3;
            arr[2] = 2;
        }else{
            arr[0] = 2;
            arr[1] = 3;
            arr[2] = 1;
            for(ll i=3; i<n; i++){
                ll temp = i+1;
                if(ceil(log2(temp)) == floor(log2(temp))){
                    arr[i] = temp+1;
                    arr[i+1] = temp;
                    i++;
                }else{
                    arr[i] = temp;
                }
            }
        }
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}