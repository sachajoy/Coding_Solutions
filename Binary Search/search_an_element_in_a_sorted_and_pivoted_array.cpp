#include<bits/stdc++.h>
using namespace std;

int binary(int arr[], int l, int r, int key){
    if(l>r){
        return -1;
    }
    int m = l + (r-l)/2;
    if(arr[m] == key){
        return m;
    }
    if(arr[m] >= arr[l]){
        if(key >= arr[l] && key <= arr[m]){
            return binary(arr, l, m-1, key);
        }
        return binary(arr, m+1, r, key);
    }else{
        if (key >= arr[m] && key <= arr[r]) 
            return binary(arr, m+1, r, key); 
  
        return binary(arr, l, m-1, key); 
    }
    
}

int main(){
    int arr[10] = {8,9,1,2,3,4,5,6,7};
    int n;
    cin >> n;
    cout << binary(arr, 0, 9, n);
}