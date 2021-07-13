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
#define FOR(i,n,m) for(long i=n;i<=m;i++)
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
		long n;
		cin >> n;
		long a[n+5];
		FOR(i,0,n-1){
			cin >> a[i];
		}
		long x,k;
		cin >> x >> k;
		long sub[n+5];
		FOR(i,n-1,i++){
			sub[i]=abs(a[i]-x);
		}
		FOR(i,0,n-2){
			FOR(j,i+1,n-1){
				if(sub[i]>sub[j]){
					swap(sub[i],sub[j]);
					swap(a[i],a[j]);
				}
			}
		}
		FOR(i,0,k-1){
			cout << a[i] << " ";
		}
		cout << endl;
    }
    return 0;
}
