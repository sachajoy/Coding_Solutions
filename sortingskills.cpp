#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool merge_sort(ll *input, int i, int n){
    if(i == n-1)
        return true;
    // cout << input[i] << "-" << input[i+1] << endl;
    bool output;
    if(input[i] > input[i+1]){
            // cout << "1" << endl;
        
        if(input[i+1] + 1 == input[i]){
            // cout << "2" << endl;
            swap(input[i], input[i+1]);
            output = merge_sort(input, i+1, n);
        }else{
            // cout << "3" << endl;
            output = false;
        }
    }else{
        output = merge_sort(input, i+1, n);
        
    }
    // cout << "o-" << output << endl;
    return output;
}


int main()
{
    int t;

    cin >> t;
	while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(merge_sort(a, 0, n))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }    
	return 0;
}
