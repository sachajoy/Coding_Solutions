#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n*n];
        for(int i=0; i<n*n; i++){
            cin >> arr[i];
        }
        bool check[n];
        check[0] = true;
        int count = 0;
        for(int i=0; i<n; i++){
            check[i] = (arr[i] == i+1) ? true : false;
        }
        for(int i=n-1; i>=1; i--){
            if(!check[i]){
                count++;
                for(int j=i; j>=1; j--)
                    check[j] = (check[j])? false:true;
            }
        }
        cout << count << endl;
    }
}