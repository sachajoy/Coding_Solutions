#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        ll sumn = 0, summ = 0;
        int arrn[n], arrm[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arrn[i];
            sumn += arrn[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arrm[i];
            summ += arrm[i];
        }

        if (sumn > summ)
        {
            cout << 0 << endl;
        }
        else
        {
            sort(arrn, arrn + n);
            sort(arrm, arrm + m);
            reverse(arrm, arrm+m);
            int j=0;
            int c=0;
            for(int i=0; i<n; i++){
                if(j<m){
                    sumn = sumn - arrn[i] + arrm[j];
                    summ = summ - arrm[j] + arrn[i];
                    swap(arrn[i], arrm[j]);
                    c++; j++;
                    if(sumn > summ){
                        break;
                    }
                }
            }
             if(sumn > summ){
                 cout << c << endl;
             }else{
                 cout << -1 << endl;
             }
        }
    }
}