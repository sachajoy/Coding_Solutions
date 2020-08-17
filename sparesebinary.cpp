#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string convertBinary(ll n){
	string ans="";
	while(n!=0){
		if(n%2 == 1){
			ans += "1";
		}else{
			ans += "0";
		}
		n /= 2;
	}
	// reverse(ans.begin(), ans.end());
	return ans;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll i=n;
		while(1){
			bool flag = true;
			string s = convertBinary(i);
            // cout << s << endl;
			for(int j=1; j<s.size(); j++){
				if(s[j] == '1' && s[j-1] == '1'){
					// cout << i << " with consetutive 1s" << endl;
					flag = false;
					break;
				}
			}
			if (flag){
				cout << i << endl;
				break;
			}
			i++;
		}

	}
	return 0;
}