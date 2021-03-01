#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007;


int main(){
    int t;
    cin >> t;
    while(t--){
        ll d, k;
        cin >> d >> k;
        queue<pair<ll, ll>> a, u;
        pair<ll, ll> pos;
        pos = make_pair(0,0);
        ll max = sqrt(d);
        if(k*k > d*d){
            cout << "Utkarsh W" << endl;
        }else{
            a.push(make_pair(k, 0));
            a.push(make_pair(0, k));
        }
        while(true){
            cout << "1" << endl;
            if(a.empty()){
                cout << "Utkarsh W" << endl;
                break;
            }else{
                while(!a.empty()){
                    cout << "a" << endl;
                    pos = a.front();
                    a.pop();
                    cout << pos.first<< " - " << pos.second << endl;
                    if(pow(pos.first+k,2) + pow(pos.second,2) <= d*d){
                        u.push(make_pair(pos.first+k, pos.second));
                    }
                    if(pow(pos.first, 2) + pow(pos.second+k,2) <= d*d){
                        u.push(make_pair(pos.first, pos.second+k));
                    }
                }
            }
            if(u.empty()){
                cout << "Ashish W" << endl;
                break;
            }else{
                while(!u.empty()){
                    cout << "ut" << endl;
                    pos = u.front();
                    u.pop();
                    cout << pos.first << pos.second << endl;
                    if(pow(pos.first+k,2) + pow(pos.second,2) <= d*d){
                        a.push(make_pair(pos.first+k, pos.second));
                    }
                    if(pow(pos.first, 2) + pow(pos.second+k,2) <= d*d){
                        a.push(make_pair(pos.first, pos.second+k));
                    }
                }
            }
            
        }
    }
}