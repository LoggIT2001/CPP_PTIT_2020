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

int Solution(int a[], int n){
	int lis[n+5];
	lis[0]=1;
	FOR(i,1,n-1){
		lis[i]=1;
		FOR(j,0,i-1){
			if(a[i]>a[j] && lis[i]<lis[j]+1){
				lis[i]=lis[j]+1;
			}
		}
	}
	return *max_element(lis,lis+n);
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
		FOR(i,0,n-1){
			cin >> a[i];
		}
		cout << Solution(a,n) << endl;
    }
    return 0;
}
