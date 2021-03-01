#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j == i || j == i+1 || j == i-1){
                    cout << 1 << " ";
                }else{
                    cout << 0 << " ";
                }
            }
            cout << endl;
        }
    }
}