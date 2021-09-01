#include<bits/stdc++.h>
using namespace std;

bool kt1(string s){
	for(int i=0;i<s.size()-1;i++){
		if(((s[i]-'0') != (s[i+1]-'0') + 1)) return false;
		//if(s[i]!=s[i+1] + '1' || s[i]!=s[i+1]-'1') return true;
	}
	return true;
}
bool kt2(string s){
	for(int i=0;i<s.size()-1;i++){
		if(((s[i]-'0') != (s[i+1]-'0' )- 1)) return false;
		//if(s[i]!=s[i+1] + '1' || s[i]!=s[i+1]-'1') return true;
	}
	return true;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		string s;
		cin >> s;
		if(kt1(s) || kt2(s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
