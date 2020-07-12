#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int power(int n){
    int ans=0;
    while(n!=0){
        int temp = n%10;
        ans += temp;
        n = n/10;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a=0, b=0;
        for(int i=0; i<n; i++){
            int x, y;
            cin >> x >> y;
            x = power(x);
            y = power(y);
            if(x > y){
                a++;
            }else if(y>x){
                b++;
            }else{
                a++;
                b++;
            }
        }
        if(a > b){
            cout << "0 " << a << endl;
        }else if(b>a){
            cout << "1 " << b << endl;
        }else{
            cout << "2 " << a << endl;
        }
    }
}