#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        bool arr[n];
        
        for(int i=0; i<n; i++){
            arr[i] = 1;
        }
        while(true){
            if(arr[x] == false){
                break;
            }
            arr[x] = false;
            x = (x+k)%n;
        }
        // for(int i=0; i<n; i++){
        //     cout << i << ":" << arr[i]<<endl;
        // }
        if(arr[y] == false)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
}