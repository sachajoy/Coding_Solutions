#include <bits/stdc++.h>
using namespace std;
vector<int> calcu(string s)
{
    int n = s.length();
    vector<int> z(n);
    int i = 1, l = 0, r = 0;
    z[0] = n;
    for (int i = 1, l = 0, r = 0; i < n; i++)
    {
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while(i + z[i] < n && s[z[i]] == s[i+z[i]])
        z[i]++;
        if(i+z[i] - 1 > r){
            l = i;
            r = i+ z[i] - 1;
        }
    }
    return z;
}
int solve(string s){
    int n = s.length(), ans = 0;
    vector<int> z = calcu(s);
    for(auto s:z){
        ans += s;
        cout << s << " ";
    }
    cout << endl;
    return ans;
}
int main(){
    string s = "ababaa";
    int k = solve(s);
    cout << k << endl;
    return 1;
}