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

int a[1000005];

/**********DTL**********/

void SangNT(){
	FOR(i,2,1000005){
		a[i]=1;
	}
	FOR(i,2,1000005){
		if(a[i]==1){
			for(ll j=i*i;j<=1000005;j+=i){
				a[j]=0;
			}
		}
	}
}

ll KT(ll n){
	int check=0;
	FOR(i,2,sqrt(n)){
		if(a[i]==1){
			check++;
		}
	}
	return check;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

	SangNT();
    int test;
    cin >> test;
    while(test--){
		ll n;
		cin >> n;
		cout << KT(n) << endl;
    }
    return 0;
}
