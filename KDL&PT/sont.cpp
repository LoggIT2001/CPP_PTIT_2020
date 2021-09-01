#include<bits/stdc++.h>
using namespace std;

bool prime(long x){
	if(x<2) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}

int main(){
	long n;
	cin >> n;
	if(prime(n)) cout << "YES" ;
	else cout << "NO";
	cout << endl;
	return 0;
}
