#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n;i++){
            cin >> arr[i];
        }
        vector<string> ans;
        for(int i=0; i<n+1; i++){
            string temp = "";
            if(i==0){
                for(int j=0; j<arr[i]; j++){
                    temp += "a";
                }
            }else if(i==n){
                for(int j=0; j<arr[i]; j++){
                    temp += "a";
                }
            }else{
                int diff = arr[i] - arr[i-1];
                temp += ans[i-1];
                if(diff > 0){
                    for(int j=0; j<diff; j++){
                        temp += "a";
                    }
                }
            }
            ans.push_back(temp);
        }
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << endl;
        }

    }
}