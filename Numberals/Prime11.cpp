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

bool Prime(ll a){
	ll sq=sqrt(a)+1;
	if(a<2) return false;
	FOR(i,2,sq-1){
		if(a%i==0) return false;
	}
	return true;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		ll n;
		cin >> n;
		if(n%2==1) cout << "0";
		else{
			ll x=1;
			ll sq=sqrt(n);
			while(x<=sq){
				x*=2;
			}
			if((x*(x-1)/2==n)&&(Prime(x-1))) cout << "1";
			else cout << "0";
		}
		cout << endl;
    }
    return 0;
}
