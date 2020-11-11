#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int ans = 0;
        for(int i=0; i<n; i++){
            int a; 
            cin >> a;
            ans += a;
        }
        if(ans == k){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    }
}