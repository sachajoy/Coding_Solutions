#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x, min_steps=INT_MAX, player = -1;
        cin >> n >> k;
        for (int i=0; i<n; i++) {
            cin >> x;
            if (k%x != 0) {
                continue;
            }
            int ans = k/x;
            if (ans < min_steps) {
                min_steps = ans;
                player = x;
            }

        }

        cout << player << endl;

    }
    return 0;
}
