#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int Min=1e9;
		for(int i=0;i<n-1;i++){
			if(a[i+1]-a[i] < Min){
				Min = a[i+1]-a[i];
			}
		}
		cout << Min << endl;
	}
	return 0;
}
