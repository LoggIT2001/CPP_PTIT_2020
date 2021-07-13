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

void result(int k){
	if(k>vt.size()) cout << "-1";
	else{
		for(int i=0;i<vt.size();i++){
			if(i==k-1){
				cout << vt[i];
			}
		}
	}
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
    	vt.clear();
    	int n,k;
		cin >> n >> k;
		Solution(n);
		result(k);
		cout << endl;
    }
    return 0;
}
