#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n, greater<int>());
        // if(n <= 2){
        //     cout << arr[n-1];
        // }else if(n == 3){
        //     cout << max(arr[0]+arr[1], arr[2]);
        // }else{
        //     cout << max(arr[0]+arr[3], arr[1]+arr[2]);
        // }
        if(n <= 2){
            cout << arr[n-1] << endl;
            continue;
        }
        int a=arr[0], b=arr[1];
        for(int i=2; i<n; i++){
            if(a < b){
                a += arr[i];
            }else{
                b += arr[i];
            }
        }
        cout << max(a, b);
        cout << endl;
    }
}