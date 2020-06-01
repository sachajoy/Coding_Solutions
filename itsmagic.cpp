#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	ll a[n], sum=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		sum += a[i];
	}
    // cout << "sum - " << sum << endl;
	ll rem = sum%7;
    // cout << "rem - " << rem << endl;
    // cout << "55 - " <<11 a[55] << endl;
    // cout << "76 - " << a[76] << endl;
	int index = -1, temp_index = 0, min=INT_MAX;
	for(int i=0; i<n; i++){
		if( (sum - a[i]) %7 == 0){
            // cout << "i - " << endl;
			if(min > a[i]){
                // cout << "found - " << endl;
                min = a[i];
                index = i;
            }
		}
		
	}
	cout << index;
    cout << endl;
	return 0;
}