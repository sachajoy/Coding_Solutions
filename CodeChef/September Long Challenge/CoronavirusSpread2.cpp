#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, best=INT_MAX, worst=INT_MIN;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[n];
        }
        int infect[n];
        for(int i=0; i<n; i++){
            int count=1;
            for(int j=i+1; j<n; j++){
                if(arr[i] > arr[j]) count++;
            }
            for(int j=i-1; j>=0; j--){
                if(arr[i] < arr[j]) count++;
            }
            infect[i] = count;
            best = min(best, count);
            worst = max(worst, count);
        }
        cout << best << " " << worst << endl;

    }
}