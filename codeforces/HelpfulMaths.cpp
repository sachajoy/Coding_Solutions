#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<int> nums;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            nums.push_back(s[i] - '0');
        }
    }
    sort(nums.begin(), nums.end());
    string ans = "";
    for(int i=0; i<nums.size()-1; i++){
        ans += nums[i] + '0';
        ans += "+";
    }
    ans += nums[nums.size()-1] + '0';
    cout << ans;
}