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

ll doi(ll n, int x, int y){
	ll res=0;
	ll mul=1;
	while(n>0){
		int re=n%10;
		if(re==x){
			res=res+y*mul;
		}else{
			res=res+re*mul;
		}
		mul*=10;
		n/=10;
	}
	return res;	
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		ll n,m;
		cin >> n >> m;
		ll Min=doi(n,6,5) + doi(m,6,5);
		ll Max=doi(n,5,6) + doi(m,5,6);
		cout << Min << " " << Max << endl;
    }
    return 0;
}
