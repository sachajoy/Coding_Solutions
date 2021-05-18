#include <bits/stdc++.h>
using namespace std;
#define MOD int(ie9+7)
typedef long long ll;
int n;
int arr[2000];
void solve(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int i=1, j=0; 
    while(i < n){
        if((arr[i] + arr[i-1]) % 2 == 0){
            i++;
        }else{
            j=i;
            bool flag = false;
            while(j < n){
                if((arr[i-1] + arr[j]) % 2 == 0){
                    swap(arr[i], arr[j]);
                    flag = true;
                    break;
                }
                j++;
            }
            if(flag == false){
                break;
            }
            i++;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}