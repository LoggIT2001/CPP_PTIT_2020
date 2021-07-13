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

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n;
		cin >> n;
		long a[n+5],b[n+5];
		FOR(i,1,n){
			cin >> a[i];
			b[i]=a[i];
		}
		sort(b+1,b+n+1);
		int left=0,right=0;
		FOR(i,1,n){
			if(a[i]!=b[i]){
				left=i;
				break;
			}
		}
		FORD(i,1,n){
			if(a[i]!=b[i]){
				right=i;
				break;
			}
		}
		cout << left << " " << right << endl;
    }
    return 0;
}
