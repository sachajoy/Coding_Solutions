#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m;
    cin >> n >> m;
    if(!(n-1 <= m && m <= 2*(n+1))){
        cout << -1;
    }else{
        if(n-1 == m){
            for(int i=0; i<m; i++){
                cout << "01";
            }
            cout << "0";
        }else if(m == n){
            for(int i=0; i<m; i++)
                cout << "10";
        }else{
            for(int i=0; m>n ;n--, m-=2){
                cout << "110";
            }
            m -= (n*2);
            for(int i=0; i<n; i++, m--){
                cout << "10";
            }
            if(m == 1){
                cout << "1";
            }
            cout << "m:" << m << endl;

        }
    }
}