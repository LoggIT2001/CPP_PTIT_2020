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

bool isFibonacci(long long n){
	long long a=0,b=1;
	long long c=a+b;
	if(n==a || n==b) return true;
	while(c<=n){
		if(c==n) return true;
		a=b;
		b=c;
		c=a+b;
	}
	return false;
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
		FOR(i,1,n){
			cin >> a[i];
		}
		FOR(i,1,n){
			if(isFibonacci(a[i])){
				cout << a[i] << " ";
			}
		}
		cout << endl;
    }
    return 0;
}
