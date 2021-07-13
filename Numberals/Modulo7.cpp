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

/**********DTL**********/

void Solution(int a[], int n){
	sort(a,a+n);
	int d=a[n-1]-a[0];
	if(d==0){
		return;
	}
	vector<int> vt;
	for(int i=1;i*i<=d;i++){
		if(d%i==0){
			vt.pb(i);
			if(i!=d/i){
				vt.pb(d/i);
			}
		}
	}
	int count=0;
	for(int i=0;i<vt.size();i++){
		int tmp=a[0]%vt[i];
		int j;
		for(j=1;j<n;j++){
			if(a[j]%vt[i]!=tmp){
				break;
			}
		}
		if(j==n) count++;
	}
	cout << count ;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		Solution(a,n);
		cout << endl;
    }
    return 0;
}
