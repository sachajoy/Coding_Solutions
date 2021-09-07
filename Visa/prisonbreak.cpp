
#include <bits/stdc++.h>
using namespace std;
int breakThePrison(vector<int> &H, vector<int> &V, int n, int m, int x, int y)
{
    vector<bool> boolH(n + 1, true);
    vector<bool> boolV(m + 1, true);
    for (int i = 0; i < x; ++i)
    {
        boolH[H[i]] = false;
    }
    for (int i = 0; i < y; ++i)
    {
        boolV[V[i]] = false;
    }
    int localMaxHorizontal = 0;
    int globalMaxHorizontal = -1;
    int localMaxVertical = 0;
    int globalMaxVertical = -1;
    for (int i = 1; i <= n; ++i)
    {
        if (boolH[i])
        {
            localMaxHorizontal = 0;
        }
        else
        {
            localMaxHorizontal++;
            globalMaxHorizontal = max(localMaxHorizontal, globalMaxHorizontal);
        }
    }
    for (int i = 1; i <= m; ++i)
    {
        if (boolV[i])
        {
            localMaxVertical = 0;
        }
        else
        {
            localMaxVertical++;
            globalMaxVertical = max(localMaxVertical, globalMaxVertical);
        }
    }

    return (globalMaxHorizontal + 1) * (globalMaxVertical + 1);
}
