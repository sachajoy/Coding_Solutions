#include <bits/stdc++.h>
using namespace std;
#define MOD int(ie9+7)
typedef long long ll;
int n;
string s;
void solve(){
    cin >> n; 
    cin >> s;
    int count = 0;
    bool flag = true;
    int tcount=0, mcount=0;
    for(int i=0; i<n; i++){
        if(s[i] == 'T') tcount++;
        else mcount++;
    }
    if(tcount != 2*mcount){
        cout << "NO"  << endl;
        return;
    }
    for(int i=0; i<n; i++){
        if(s[i] == 'T'){
            count++;
        }else{
            count--;
        }
        if(count < 0){
            flag = false;
            break;
        }
    }
    count = 0;
    for(int i=n-1; i>=0; i--){
        if(s[i] == 'T'){
            count++;
        }else{
            count--;
        }
        if(count < 0){
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main()
{
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}