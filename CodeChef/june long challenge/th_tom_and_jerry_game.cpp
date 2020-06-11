#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll ts;
        cin >> ts;
        ll count=1, ans=0;
        if(ts == 1){
            ans = 0;
        }else if(ts%2==0){
            ll temp = ts;
            while(temp%2 == 0){
                count *= 2;
                temp /= 2;
            }
            if(temp == 1){
                ans = 0;
            }else{
                count *= 2;
                ans = ts/count;
                
            }
        }else{
            ans = ts/2;
        }
        cout << ans << endl;
    }
}