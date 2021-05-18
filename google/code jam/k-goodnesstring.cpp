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

int solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int score = 0;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
            score += 1;
    }
    if(k > score){
        return k - score;
    }
    return score - k;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int temp = 1;
    while (t--)
    {
        cout << "Case #" << temp++ << ":" << solve() << endl;
    }
    return 0;
}