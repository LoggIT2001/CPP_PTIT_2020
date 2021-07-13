#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		long long n1,n2,n3;
		cin >> n1 >> n2 >> n3;
		vector<long long> a;
		vector<long long> b;
		vector<long long> c;
		vector<long long> d(n1+n2+n3);
		vector<long long> ::iterator p;
		long long x;
		for(long long i=0;i<n1;i++){
			cin >> x;
			a.push_back(x);
		}
		for(long long i=0;i<n2;i++){
			cin >> x;
			b.push_back(x);
		}
		for(long long i=0;i<n3;i++){
			cin >> x;
			c.push_back(x);
		}
		p=set_intersection(a.begin(),a.end(),b.begin(),b.end(),d.begin());
		d.resize(p-d.begin());
		p=set_intersection(c.begin(),c.end(),d.begin(),d.end(),d.begin());
		d.resize(p-d.begin());
		sort(d.begin(),d.end());
		if(!d.empty()){
			for(p=d.begin();p!=d.end();p++){
				cout << *p <<" ";
			}
		}else cout << "-1";
		cout << endl;
	}
	return 0;
}
