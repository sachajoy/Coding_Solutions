#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k, x;
        cin >> k >> x;
        int count=1;
        vector<int> fac;
        for(int i=1; i<=x; i++){
            if(x%i == 0){
                fac.push_back(i);
            }
        }
        count = fac.size();
        
    }
}