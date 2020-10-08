#include<bits/stdc++.h>
using namespace std;
int mat[5][5], n=5;
int main(){
    int r, c;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            if(x == 1){
                r = i+1;
                c = j+1;
            }
        }
    }
    cout << abs(r - 3) + abs(c - 3);
    return 0;
}