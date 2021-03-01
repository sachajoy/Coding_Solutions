#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans=0, i=0;
        while(i<s.length()-1){
            if(s[i] != s[i+1]){
                i=i+2;
                ans++;            
            }else{
                i++;
            }
        }
        cout << ans << endl;
    }
}