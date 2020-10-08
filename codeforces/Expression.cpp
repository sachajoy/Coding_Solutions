#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c, ans=0;
    cin >> a >> b>> c;
    if(a == 1 && b == 1 && c == 1){
        ans = 3;
    }else if(a == 1 || b == 1 || c == 1){
        ans = min(a, min(b,c));
        int m = max(a, max(b, c));
        ans += (a+b+c) - m - ans;
        ans *= m;
    }else{
        ans = a*b*c;
    }
    cout << ans;
}