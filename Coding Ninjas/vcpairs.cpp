#include<bits/stdc++.h>
using namespace std;
bool is_vowel(char a){
	if(a == 'a' || a == 'e' || a == 'i'|| a == 'o'|| a == 'u'){
		return true;
	}
	return false;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int count =0;
		for(int i=0; i<n-1; i++){
			if((!is_vowel(s[i])) && (is_vowel(s[i+1]))){
				count++;
			}
		}
		cout << count << endl;
	}
}