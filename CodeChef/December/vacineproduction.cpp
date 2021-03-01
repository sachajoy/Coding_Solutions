#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007;

int main(){
    int d1, d2, v1, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    ll day=1, total=0;
    while(true){
        if(total >= p){
            break;
        }
        day++;
        if(d1 <= day){
            total += v1;
        }
        if(d2 <= day){
            total += v2;
        }
    }
    cout << day;
}