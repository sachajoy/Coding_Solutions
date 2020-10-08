#include<bits/stdc++.h>
using namespace std;

bool helper(int* arr, int n, int k){
    if(n == 0){
        if(k == 0){
            return true;
        }
        return false;
    }
    if(k == 0){
        return true;
    }
    bool out1=false, out2=false;
    if(k >= arr[0]){
        out1 = helper(arr+1, n-1, k-arr[0]);
    }
    out2 = helper(arr+1, n-1, k);
    return out1 || out2;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;
        cin >> k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(helper(arr, n, k)){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }
}