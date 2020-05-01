#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    while(t--){
        string s;
        cin >> s;
        ll a[s.size()];
        int i=0, k=s.size()-1;
        map<char, vector<int>>m;
        for(int i=0; i<s.size(); i++){
            m[s[i]].push_back(i);
        }
        int even=0, odd=0;
        map<int,vector<int>>::iterator it;
        for(it=m.begin(); it!=m.end(); it++){
            if(it->second.size()%2 == 0)
                even++;
            else
                odd++;
        }
        if(odd>1){
            cout << "-1" << endl;
            break;
        }else{
            for(it=m.begin(); it!=m.end(); it++){
                for(int j=0; j<it->second.size(); j+=2){
                    if(it->second.size() - j == 1){
                        a[s.size()/2] = it->second[j];
                        continue;
                    }
                    a[i] = it->second[j];
                    a[k] = it->second[j+1];
                    i++;
                    j--;
                }
            }
            for(int i=0; i<s.size(); i++){
                cout << a[i]+1;
            }
        }
        cout << endl;

    }
}