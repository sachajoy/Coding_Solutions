#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool flag = true;
    while(n != 0){
        if(n%10 == 4 || n%10 == 7){
            flag = false;
            break;
        }
        n /= 10;
    }
    if(flag) 
        cout << "YES";
    else 
        cout << "NO";
}