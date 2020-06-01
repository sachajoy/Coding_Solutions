#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cal(ll k, int m, int n,ll t, int s){
    cout << "k - " << k << endl;
    if(k == t && s > 0){
        return INT_MAX;
    }
	if(k == m){
		return s;
	}
    if(k < 1){
        return INT_MAX;
    }
    ll dec1, dec2, mul;
   
        dec1 = cal(k-1, m, n,t, s+1);
	    dec2 = cal(k-2, m, n,t, s+1);
    
    
    	mul = cal(k*n, m, n,t, s+1);
    
	
	ll ans = min(mul, min(dec1, dec2));
    
	return ans;
}



int main(){
	ll t;
	cin >> t;
	while(t--){
		int m, n;
		ll k;
		cin >> k;
        cin >> m >> n;
        cout << "m -" << m << "n - "<< n << "k - " << k << endl;
		cout << cal(k, m, n, k,0) << endl;
	}
    return 0;
}