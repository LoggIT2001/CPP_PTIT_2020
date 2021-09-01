#include<bits/stdc++.h>
using namespace std;


int main(){
	int test;
	cin >> test;
	while(test--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		double x1 = abs((double)(a) - (double)(c));
		double x2 = abs((double)(b) - (double)(d));
		double AB = sqrt(x1*x1 + x2*x2);
		cout << fixed << setprecision(4) << AB << endl;
	}
	return 0;
}
