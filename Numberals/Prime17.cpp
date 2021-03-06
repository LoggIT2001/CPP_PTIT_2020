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

bool check(ll n){
	if(n<2) return false;
	if(n==2) return true;
	FOR(i,2,sqrt(n)){
		if(n%i==0) return false;
	}
	return true;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		ll L,R;
		cin >> L >> R;
		ll count=0;
		FOR(i,L,sqrt(R)){
			if(check(i)){
				count++;
			}
		}
		cout << count << endl;
    }
    return 0;
}
