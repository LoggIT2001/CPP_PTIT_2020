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
#define FOR(i,n,m) for(int i=n;i<=m;++i)
#define FORD(i,n,m) for(int i=m;i>=n;--i)
#define reset(A) memset(A,0,sizeof(A))
#define FILEIN freopen("inputDTL.txt","r",stdin)
#define FILEOUT freopen("outputDTL.txt","w",stdout)

/**********DTL**********/

long long const mod=1e9+7;
int const MAX=1e5+5;

/**********DTL**********/

vector<int> vt;

/**********DTL**********/

void rotal(int a[][100], int n, int m){
	int i, l=0, k=0;
	while(k<n && l<m){
		FOR(i,l,m-1){
			vt.pb(a[k][i]);
		}
		k++;
		FOR(i,k,n-1){
			vt.pb(a[i][m-1]);
		}
		m--;
		if(k<n){
			FORD(i,l,m-1){
				vt.pb(a[n-1][i]);
			}
			n--;
		}
		if(l<m){
			FORD(i,k,n-1){
				vt.pb(a[i][l]);
			}
			l++;
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
		int n,m,k;
		cin >> n >> m >> k;
		int a[100][100];
		FOR(i,0,n-1){
			FOR(j,0,m-1){
				cin >> a[i][j];
			}
		}
		rotal(a,n,m);
		cout << vt[k-1] << endl;
    }
    return 0;
}
