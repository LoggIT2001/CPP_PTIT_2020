#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		long n;
		cin >> n;
		long sum = n*(1+n) /2;
		cout << sum << endl;
	}
	return 0;
}
