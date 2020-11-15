#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int power = 0, s = 0, m = -1, f = -1, count = 0, i=0;
        char a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        while(f < n && m < n && i < n){
            if(a[i] == 'I'){
                f = i;
            }else if(a[i] == 'M'){
                m = i;
            }else if(f != -1 && m != -1){
                power = k + 1 - abs(f-m) - 
            }
            i++;
        }
        cout << count << endl;
    }
}