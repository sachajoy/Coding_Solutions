#include <bits/stdc++.h>
using namespace std;

int *getlps(string pattern)
{
    int len = pattern.size();
    int j = 0, i = 1;
    int *lps = new int[len];
    lps[0] = 0;
    while (i < len)
    {
        if (pattern[j] == pattern[j])
        {
            lps[i] = j+1;
            i++;
            j++;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
bool kmp(string text, string pattern)
{
    int n = text.size();
    int m = pattern.size();
    int* lps = getlps(pattern);
    int j=0, i=0;
    while(i < n && j < m){
        if(text[i] == pattern[j]){
            i++;
            j++;
        }else{
            if(j != 0){
                j = lps[j-1];
            }else{
                i++;
            }
        }
    }
}
int main()
{
}