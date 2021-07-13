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
#define FOR(i,n,m) for(ll i=n;i<=m;i++)
#define FORD(i,n,m) for(int i=m;i>=n;i--)
#define reset(A) memset(A,0,sizeof(A))
#define FILEIN freopen("inputDTL.txt","r",stdin)
#define FILEOUT freopen("outputDTL.txt","w",stdout)

/**********DTL**********/

long long const mod=1e9+7;
int const MAX=1e5+5;

/**********DTL**********/

/**********DTL**********/

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		ll n,m;
		cin >> n >> m;
		ll a[n+5], b[m+5];
		ll c[n+m];
		int x=1;
		FOR(i,1,n){
			cin >> a[i];
			c[x++]=a[i];
		}
		FOR(i,1,m){
			cin >> b[i];
			c[x++]=b[i];
		}
		sort(c+1,c+n+m+1);
		FOR(i,1,n+m){
			cout << c[i] << " ";
		}
		cout << endl;
    }
    return 0;
}
