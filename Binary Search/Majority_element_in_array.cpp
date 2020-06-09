#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int>::iterator lower, upper;
        int s; 
        cin >> s;
        lower = lower_bound(v.begin(), v.end(), s);
        upper = upper_bound(v.begin(), v.end(), s);
        int l = lower - v.begin();
        int r = upper - v.end();
        int total = upper - lower;
        if(total >= n/2){
            cout << "True" << endl;
        }else{
            cout << "False" << endl;
        }
    }
}