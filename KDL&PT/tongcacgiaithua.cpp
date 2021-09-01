#include<bits/stdc++.h>
using namespace std;

int giaiThua(int x){
	int mul=1;
	for(int i=1;i<=x;i++){
		mul*=i;
	}
	return mul;
}

int main(){
	int n;
	cin >> n;
	long sum=0;
	for(int i=1;i<=n;i++){
		sum+=giaiThua(i);
	}
	cout << sum ;
	return 0;
}
