#include<bits/stdc++.h>
using namespace std;

bool kt(string s){
	int len=s.size();
	
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]) return false;
	}
	return true;
}

bool check(string s){
	for(int i=0;i<s.size();i++){
		if((s[i]-'0')%2!=0) return false;
	}
	return true;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		string s;
		cin >> s;
		if(kt(s) && check(s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
