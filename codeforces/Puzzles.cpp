#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int puzzles[m];
    for(int i=0; i<m; i++) cin >> puzzles[i];
    sort(puzzles, puzzles+m);
    int ans = INT_MAX;
    for(int i=0, j=n-1; j<m; i++, j++){
        ans = min(ans, puzzles[j] - puzzles[i]);
    }
    cout << ans;
}