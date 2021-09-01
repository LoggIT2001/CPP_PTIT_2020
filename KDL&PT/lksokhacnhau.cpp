#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	bool chuaxet[1000];
	memset(chuaxet,false,sizeof(chuaxet));
	vector<int> vt;
	for(int i=0;i<n;i++){
		if(chuaxet[a[i]]==false){
			vt.push_back(a[i]);
			chuaxet[a[i]]=true;
		}
	}
	sort(vt.begin(),vt.end());
	for(int i=0;i<vt.size();i++){
		cout << vt[i] << " ";
	}
	return 0;
}
