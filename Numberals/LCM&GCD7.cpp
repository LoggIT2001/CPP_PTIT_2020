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

ll LCM(ll x, ll y, ll z){
	ll tmp=((x*y)/(__gcd(x,y)));
	return ((tmp*z)/(__gcd(tmp,z)));
}

ll Solution(ll x, ll y, ll z, ll n){
	ll lcm=LCM(x,y,z);
	ll tmp=pow(10,n-1);
	ll temp=tmp%lcm;
	if(temp==0){
		return tmp;
	}
	tmp+=lcm-temp;
	if(tmp<pow(10,n)){
		return tmp;
	}else{
		return 0;
	}
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		ll x,y,z,n;
		cin >> x >> y >> z >> n;
		if(Solution(x,y,z,n)!=0){
			cout << Solution(x,y,z,n) << endl;
		}else{
			cout << "-1" << endl;
		}
    }
    return 0;
}
