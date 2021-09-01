#include<bits/stdc++.h>
using namespace std;

bool KT(string s){
	for(int i=0;i<s.size();i++){
		if(s[i] != '0' && s[i] != '6' && s[i] != '8'){
			return false;
		}
	}
	return true;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		string s;
		cin >> s;
		if(KT(s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
