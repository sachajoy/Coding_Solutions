#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int p[n];
        for(int i=0; i<n; i++){
            cin >> p[i];
        }
        int ans=0, total_sum=0;
        for(int i=0; i<n; i++){
            if(p[i] > k){
                ans += k;
            }else{
                ans += p[i];
            }
            total_sum += p[i];
        }
        ans = total_sum - ans;
        cout << ans << endl;
    }
}