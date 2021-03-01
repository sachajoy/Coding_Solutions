#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s = "abcdefghijklmnop";
        int n;
        cin >> n;
        int total = n/4;
        for(int i=0; i<total; i++){
            int value = 0;
            char a;
            for(int j=3; j>=0; j--){
                cin >> a;
                if(a == '1'){
                    value += pow(2, j);
                }
            }
            // cout << value << endl;
            cout << s[value];
            value=0;

        }
        cout << endl;
    }
}