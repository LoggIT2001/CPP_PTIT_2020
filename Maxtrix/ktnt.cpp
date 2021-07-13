#include<bits/stdc++.h>
using namespace std;

bool Prime(int x){
	if(x<2) return false;
	else{
		for(int i=2;i<=sqrt(x);i++){
			if(x%i==0) return false;
		}
	}
	return true;
}

int main(){
	int n,m;
	cin >> n >> m;
	int a[n+5][m+5];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(Prime(a[i][j])){
				a[i][j]=1;
			}else{
				a[i][j]=0;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
