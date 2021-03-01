#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int helper(int* arr, int n, int* output){
    output[0] = 0;
    output[1] = 1;
    for(int i=1; i<n; i++){
        
    }
}
int main(){
    string s;
    cin >> s;
    while(s != "0"){
        int n = s.size();
        int arr[s.size()];
        for(int i=0; i<s.size(); i++){
            arr[i] = s[i] - 48;
        }
        int output[n+1];
        cout << helper(arr, n, output) << endl;
    }
}