#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m;
    cin >>n >> m;
    ll arr[n], query[m];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<m; i++){
        cin >> query[i];
    }
    sort(arr, arr+n);
    int index = n-1, qindex=0;
    queue<int> q;
    for(ll i=1; i<query[m-1]; i++){
        ll element;
        if(!q.empty()){
            if(arr[index] > q.front()){
                element = arr[index];
                q.push(element/2);
                index++;
            }else{
                element = q.front();
                q.pop();
                q.push(element/2);
                index++;
            }
        }else{
            element = arr[index];
            q.push(element/2);
            index++;
        }
        if(query[qindex] == i){
            cout << element << endl;
            qindex++;
        }
    }
}