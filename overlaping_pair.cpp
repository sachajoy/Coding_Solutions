#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int>a, pair<int, int>b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        sort(v.begin(), v.end(), compare);
        vector<pair<int, int>> ans;
        ans.push_back(v[0]);
        int k=0, i=1;
        while(i<n ){
            if(ans[k].second >= v[i].first && ans[k].second <= v[i].second){
                ans[k].second = v[i].second;
            }else if(ans[k].second < v[i].first){
                k++;
                ans.push_back(v[i]);
            }
            i++;
        }
        for(int i=0; i<ans.size(); i++){
            cout << ans[i].first << " " << ans[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}