#include<bits/stdc++.h>
using namespace std;

bool kt(int x){
	int demc=0;
	int deml=0;
	while(x>=0){
		int t=x%10;
		if(t%2==0){
			demc++;
		}else{
			deml++;
		}
		t/=10;
	}
	if(demc == deml) return true;
	return false;
}

int main(){
	int n;
	cin >> n;
	for(int i=1;i<=1000000;i++){
		if(kt(i)){
			cout << i << " ";
		}
	}
	return 0;
}
