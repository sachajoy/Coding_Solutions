#include <bits/stdc++.h>
using namespace std;
bool ok(int i,int m,int k,vector<int> &sum)
{
	int sm=  sum[max(i,m)]-sum[min(i,m)];
	int ans=k+1-abs(i-m)-sm;
	
	return ans>0;
}
int find(string &s, int k)
{
	int n=s.size();
	vector<int> sht(n,0);

	for(int i=0;i<n;i++)
	{
		if(i>0)
		sht[i]=sht[i-1];
		if(s[i] == ':') sht[i]++;
		
	}
	int m=0,i=0,cnt=0;
	while(m<n && i<n)
	{
		while(m<n && s[m]!='M') m++;
		
		while(i<n && s[i]!='I' ) i++;
		
		if(m>=n || i>=n) break;
		if(i<m)
		{
			if(ok(i,m,k,sht))
			{
				cnt++;
				m++;
				i++;
			}
			else
			i++;
		}
		else
		{
			if(ok(i,m,k,sht))
			{
				cnt++;
				m++;
				i++;
			}
			else
			m++;
		}
	}
	return cnt;
}
void solve()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int cnt=0;
	string tmp;
	for(auto i:s)
	{
		if(i=='X'){
			cnt+=find(tmp,k);
			tmp.clear();
		}
		else
		tmp+=i;
	}
	cnt+=find(tmp,k);
	cout<<cnt;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}