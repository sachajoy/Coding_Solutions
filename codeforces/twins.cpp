#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end(), greater<int>());
    int sum = 0;
    for(int i=1; i<n; i++){
        nums[i] += nums[i-1];
    }
    int ans=0;
    for(int i=1; i<=n; i++){
        if(nums[i-1] > nums[n-1] - nums[i-1]){
            ans = i;
            break;
        }
    }
    // if(ans == 0){
    //     cout << n;
    // }else{
        cout << ans;
    // }
}