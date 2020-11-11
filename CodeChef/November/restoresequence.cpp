#include<bits/stdc++.h>
using namespace std;
#define MAX 4000000;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int b[n];
        for(int i=0; i<n; i++) cin >> b[i];
        int a[n], num=1;
        a[n-1] = num;
        num++;
        for(int i=n-2; i>=0; i--){
            if(b[i] == i+1){
                a[i] = num++;
            }else{
                a[i] = a[b[i]-1];
            }
        }
        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;
    }
}