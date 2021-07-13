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

long Dem(int b[], int dp[], int m, int x){
	if(x==0) return 0;
	if(x==1) return dp[0];
	long tmp=upper_bound(b,b+m,x)-b;
	long count=m-tmp;
	count+=dp[0]+dp[1];
	if(x==2) count-=(dp[4]+dp[3]);
	if(x==3) count+=(dp[2]);
	return count; 
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n,m;
		cin >> n >> m;
		int a[n+5],b[n+5];
		int dp[10]={0};
		FOR(i,0,n-1){
			cin >> a[i];
		}
		FOR(i,0,m-1){
			cin >> b[i];
			if(b[i]<5) dp[b[i]]++;
		}
		sort(b,b+n);
		long count=0;
		FOR(i,0,n-1){
			count+=Dem(b,dp,m,a[i]);
		}
		cout << count << endl;
    }
    return 0;
}

