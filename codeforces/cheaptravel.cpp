#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ans = 0;
    if((float)b/m > (float)a){
        ans = a*n;
    }else{
        int mr = n/m;
        ans += b*mr;
        // cout << "ans: " << ans<< endl;
        int left = n - mr;
        if(b < (n - mr*m)*a){
            ans += b;
        }else{
            ans += (n - mr*m)*a;
        }
    }
    cout << ans;
}