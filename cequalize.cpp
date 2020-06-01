#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;;
    string s, t;
    cin >> n;
    cin >> s;
    cin >> t;
    for(int i=0; i<n;){
        if(s[i] != t[i]){
            if(i+1 < n && s[i] != s[i+1] && s[i+1] != t[i+1]){
                i+=2;
            }else{
                i++;
            }
            count++;
        }else{
            i++;
        }
    }
    cout << count << endl;
}