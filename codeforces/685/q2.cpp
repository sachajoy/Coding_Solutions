#include<bits/stdc++.h>
using namespace std;
typedef long long;
#define MOD 1000000007;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        int qu[q][2];
        for(int i=0; i<q; i++){
            cin >> qu[i][0] >> qu[i][1];
        }
        for(int i=0; i<q; i++){
            string ans = s.substr(qu[i][0]-1, qu[i][1]-1);
            int len = s.length(), anslen = ans.length();
            if(len == anslen){
                cout << "NO" << endl;
            }else{
                int first, prevfirst;
                for(int i=0; i<len; i++){
                    if(s[i] == ans[i]){
                        first = i;
                        break;
                    }
                }
                int i=0, j=0, k=0;
                while()

            }
        }
    }
}