#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string check = "hello";
    int k=0;
    for(int i=0; i<s.size(); i++){
        if(check[k] == s[i]){
            k++;
        }
        if(k == 5){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}