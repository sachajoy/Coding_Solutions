#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll merge(int *a, int s, int m, int e){
    int i=s, j=m, k=0; 
    int temp[e-s+1];
    ll sum=0;
    while(i<m && j<=e){
        if(a[i] < a[j]){
            temp[k++] = a[i];
            sum = sum + (a[i]*(e-j+1));
            i++;
        }else{
            temp[k++] = a[j];
            j++;
        }
        // cout << sum << "-" << a[i] << "-" <<a[j]<<endl;
    }
    while(i<m){
        temp[k++] = a[i];
        i++;
    }
    while(j<=e){
        temp[k++] = a[j];
        j++;
    }
    for(i=s, k=0; i<=e; i++, k++){
        a[i] = temp[k];
    }
    return sum;
}
ll merge_sort(int *a, int s, int e){
    ll sum=0;
    if(s < e){
        int mid = s + (e-s)/2;
        ll left = merge_sort(a, s, mid);
        ll right = merge_sort(a, mid+1, e);
        ll msum = merge(a, s, mid+1, e);
        // cout << left + right + msum << endl;
        return left + right + msum;
    }
    return sum;
}
int main() {
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        cout << merge_sort(a, 0, n-1) << endl;
    }
}