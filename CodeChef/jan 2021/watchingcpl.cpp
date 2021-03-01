#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
const int MAXN=1e5+10;
ll prefix[MAXN];
int dp[4001][4008];
ll n,k;
ll ans=INT_MAX;
ll helper(int s, ll a[], ll sum)
{
//	cout<<s<<" ";
	if(sum <=0 and prefix[s-1]-(k-sum)>=k)
	{
		ans=min(ans,(ll)s);
		return s;
	}
	if(s==n) return INT_MAX;
	
	if(dp[s][sum]!=-1) return dp[s][sum];
	ll tmp=INT_MAX;
	tmp=helper(s+1,a,sum-a[s]);
	tmp=min(tmp,helper(s+1,a, sum));
	return dp[s][sum]=tmp;
}
void solve()
{
	
	cin>>n>>k;
	ll a[n];
	memset(dp,-1,sizeof(dp));
	ans=INT_MAX;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,greater<int>());
	if(a[0]>=k)
	{
		for(int i=1;i<n;i++)
		{
			if(k-a[i]<=0) {
				cout<<i+1<<"\n";
				return ;
			}
			k-=a[i];
		}
	}
	prefix[0]=a[0];
	for(int i=1;i<n;i++) prefix[i]=prefix[i-1]+a[i];
	helper(0,a,k);
	if(ans==INT_MAX) ans=-1;
	cout<<ans<<"\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}