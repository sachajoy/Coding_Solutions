#include<bits/stdc++.h>
using namespace std;
int binary(int arr[], int l, int r){
    if(l == r){
        return l;
    }
    if(r == l+1){
        return max(arr[l], arr[r]);
    }
    int m = l + (r-l)/2;
    if(arr[m] > arr[m-1] && arr[m] > arr[m+1]){
        return arr[m];
    }
    if(arr[m] < arr[m-1] && arr[m] > arr[m+1]){
        return binary(arr, l, m-1);
    }else{
        return binary(arr, m+1, r);
    }
}

int main(){
    int arr[] = {120, 100, 80, 20, 0};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    cout << "The maximum element is " << binary(arr, 0, n-1);  
    return 0;  
}