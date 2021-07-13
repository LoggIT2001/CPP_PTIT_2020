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

int GCD(int a, int b, int *x, int *y){
	if(b==0){
		*x=1;
		*y=0;
		return a;
	}
	int x1,y1;
	int gcd=GCD(b,a%b,&x1, &y1);
	*x=y1;
	*y=x1-(a/b)*y1;
	return gcd;
}

int Modulo(int n, int m){
	int x,y;
	if(GCD(n,m,&x,&y)!=1) return -1;
	return (x%m + m)%m;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int a,b;
		cin >> a >> b;
		ll tu=1,mau=1;
		FOR(i,b+1,a){
			tu=(tu*i)%mod;
		}
		ll z=a-b+1;
		FOR(i,2,z-1){
			mau=(mau*i)%mod;
		}
		z=Modulo(mau,mod);
		cout << (tu*z)%mod << endl;
    }
    return 0;
}
