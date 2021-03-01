#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int five=0, ten=0, fifteen=0;
        bool is_possible = true;
        if(a[0] == 5){
            five++;
        }else{
            is_possible = false;
        }
        for(int i=1; i<n; i++){
            int return_money = a[i] - 5;
            if(a[i] == 5){
                five++;
            }
            if(a[i] == 10){
                if(five > 0){
                    five--;
                }else{
                    is_possible = false;
                    break;
                }
                ten++;
            }
            if(a[i] == 15){
                if(ten > 0){
                    ten--;
                }else if(five > 1){
                    five -= 2;
                }else{
                    is_possible = false;
                    break;
                }
                fifteen++;
            }
        }
        if(is_possible){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}