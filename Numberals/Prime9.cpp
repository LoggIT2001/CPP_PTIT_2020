/******<CODE NEVER DIE>******/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define FastIO ios_base::sync_with_stdio(0)
#define IN cin.tie(0)
#define OUT cout.tie(0)
#define CIG cin.ignore()
#define pb push_back
#define pa pair<int,int>
#define f first
#define s second
#define FOR(i,n,m) for(int i=n;i<=m;i++)
#define FORD(i,n,m) for(int i=m;i>=n;i--)
#define reset(A) memset(A,0,sizeof(A))
#define FILEIN freopen("inputDTL.txt","r",stdin)
#define FILEOUT freopen("outputDTL.txt","w",stdout)

/**********DTL**********/

long long const mod=1e9+7;
int const MAX=1e5+5;

/**********DTL**********/

vector<int> vt;

/**********DTL**********/

void Solution(int n){
	while(n%2==0){
		vt.pb(2);
		n/=2;
	}
	for(int i=3;i<=n;i+=2){
		while(n%i==0){
			vt.pb(i);
			n/=i;
		}
	}
}

void result(){
	int a[10005]={0};
	vector<int> vec;
	bool chuaxet[10005];
	memset(chuaxet,true,sizeof(chuaxet));
	FOR(i,0,vt.size()-1){
		a[vt[i]]++;
		if(chuaxet[vt[i]]){
			vec.pb(vt[i]);
			chuaxet[vt[i]]=false;
		}
	}
	FOR(i,0,vec.size()-1){
		cout << vec[i] << " " << a[vec[i]] << " ";
	}
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
    	vt.clear();
		int n;
		cin >> n;
		Solution(n);
		result();
		cout << endl;
    }
    return 0;
}
