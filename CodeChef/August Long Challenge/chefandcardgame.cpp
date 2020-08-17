#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int chef, rick, chef_count=0, rick_count=0;
        cin >> chef >> rick;
        chef_count = chef/9;
        rick_count = rick/9;
        if(chef%9 != 0){
            chef_count++;
        }
        if(rick%9 != 0){
            rick_count++;
        }
        if(chef_count < rick_count){
            cout << "0 " << chef_count << endl;
        }else{
            cout << "1 " << rick_count << endl;
        }
    }
    
    return 0;
}
