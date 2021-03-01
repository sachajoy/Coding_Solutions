#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int t, n=a.size(), count = 0;
        int i=0;
        while(i<n){
            // cout << i << endl;
            if(a[i] == b[i]){
                i+=2;
            }else{
                int j=i;
                while(j<n){
                    if(a[j] == b[j]){
                        break;
                    }
                    j+=2;
                }
                i=j+2;
                count++;
            }
        }
        i=1;
        while(i<n){
            // cout << i << endl;
            if(a[i] == b[i]){
                i+=2;
            }else{
                int j=i;
                while(j<n){
                    if(a[j] == b[j]){
                        break;
                    }
                    j+=2;
                }
                i=j+2;
                count++;
            }
        }
        cout << count << endl;
    }
}