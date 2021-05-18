#include <bits/stdc++.h>
using namespace std;
#define mod int(1e9 + 7)
#define ll long long
#define pll pair<ll, ll>
#define vec vector
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define mp make_pair
#define F first
#define S second
#define pb push_back
ll n;
vll arr;
ll merge(ll start, ll mid, ll end)
{
    ll sum = 0, i = start, j = mid, k = 0;
    ll temp[end - start + 1];
    while (i < mid && j <= end)
    {
        // cout << sum << " " << arr[i] << " " << i << " " << arr[j] << " " << j << endl;
        if(arr[i] < arr[j]){
            temp[k++] = arr[i];
            sum = sum + (arr[i]*(end-j+1));
            i++;
        }else{
            temp[k++] = arr[j];
            j++;
        }
        
    }
    while (i < mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= end)
    {
        temp[k++] = arr[j++];
    }
    for(i=start, k=0; i<=end; i++, k++){
        arr[i] = temp[k];
    }
    return sum;
}
ll mergesort(ll start, ll end)
{
    ll sum = 0;
    if (start < end)
    {
        ll mid = start + (end - start) / 2;
        sum += mergesort(start, mid);
        sum += mergesort(mid + 1, end);
        sum += merge(start, mid + 1, end);
        return sum;
    }
    return sum;
}
void solve()
{
    arr.clear();
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        arr.pb(a);
    }
    cout << mergesort(0, n - 1) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}