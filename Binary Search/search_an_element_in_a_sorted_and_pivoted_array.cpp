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
    if(arr[m] < arr[l]){
        if(key >= arr[l] && key <= arr[m]){
            return binary(arr, l, m, key);
        }
        return binary(arr, m+1, r, key);
    }else{
        return binary(arr, m+1, r, key);
    }
}

int main(){
    int arr[10] = {6,7,8,9,10,1,2,3,4,5};
    int n;
    cin >> n;
    cout << binary(arr, 0, 9, n);
}