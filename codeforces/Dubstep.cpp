#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, wub = "WUB";
    cin >> s;
    int n = s.size();
    string ans = "";
    for (int i = 0; i < n;)
    {
        // cout << i << endl;
        if(i == n-2){
            ans += s[n-2];
            ans += s[n-1];
            // cout << "n-2: "  << ans << endl;
            break;
        }
        if (s[i] == wub[0] && s[i + 1] == wub[1] && s[i + 2] == wub[2])
        {
            ans += " ";
            i += 3;
        }
        else
        {
            ans += s[i];
            i++;
        }
    }
    cout << ans;
}