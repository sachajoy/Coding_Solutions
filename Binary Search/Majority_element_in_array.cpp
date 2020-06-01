#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1,2,3,3,3,3,3,3,4,50};
    vector<int>v(arr,arr+10);
    vector<int>::iterator lower, upper;
    int n; 
    cin >> n;
    lower = lower_bound(v.begin(), v.end(), n);
    upper = upper_bound(v.begin(), v.end(), n);
    int l = lower - v.begin();
    int r = upper - v.end();
    int total = upper - lower;
    if(total >= 5){
        cout << "true - " << total << endl;
    }else{
        cout << "false - " << total << endl;
    }
}