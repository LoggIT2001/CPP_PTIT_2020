#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
		}
	}
	string str="";
	str+=".";
	for(int i=0;i<s.size();i++){
		if(s[i]!= 'u' && s[i] != 'e' && s[i] != 'o' && s[i] != 'a' && s[i] != 'i' && s[i] != 'y'){
			str+=s[i];
			str+=".";
		}
	}
	for(int i=0;i<str.size()-1;i++){
		cout << str[i];
	}
	return 0;
}
