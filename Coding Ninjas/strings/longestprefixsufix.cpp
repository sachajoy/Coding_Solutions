#include<bits/stdc++.h>
using namespace std;

int* get_lps(string s){
    int len = s.length();
    int* lps = new int[len];
    int i=1, j=0;
    lps[0] = 0;
    while(i<len){
        if(s[i] == s[j]){
            lps[i] = j+1;
            i++;
            j++;
        }else{
            if(j != 0){
                j = lps[j-1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main(){

}