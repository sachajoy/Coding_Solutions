#include<bits/stdc++.h>
using namespace std;

void min_unsorted(int arr[], int n){
    cout << n << endl;
    int s, e;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            s = i;
            break;
        }
    }
    for(int i=n-1; i>=1; i--){
        if(arr[i] < arr[i-1]){ 
            e = i;
            break;
        }
    }
    int max=arr[s], min=arr[s];
    for(int i=s; i<=e; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    int s_ans=s, e_ans=e; 
    for(int i=0; i<s; i++){
        if(arr[i] > min){
            s_ans = i;
            break;
        }
    }
    for(int i=e+1; i<n; i++){
        if(arr[i] < max){
            e_ans = i;
            break;
        }
    }
    cout << s << " - " << e << endl;
    cout << s_ans << " - " << e_ans;

}

int main(){
    int arr[] = {10, 12, 20, 30, 25, 
                 40, 32, 31, 35, 50, 60}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
    min_unsorted(arr, arr_size); 
    getchar(); 
    return 0;
}