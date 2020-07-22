#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int a, b, c, x;
    cin >> a >>b >>c;
    set<int>s;
    set<int>s1;
    for(int i=0; i<a+b+c; i++){
        cin >> x;
        if(s.find(x) == s.end()){
            s.insert(x);
        }else{
            s1.insert(x);
        }
    }  
    set<int>::iterator it;
    cout<<s1.size()<<endl;
    for(it = s1.begin(); it!=s1.end(); it++){
        cout << *it << endl;
    } 
}