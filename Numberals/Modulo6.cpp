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

ll Solution(ll a, ll n, ll c){
	ll t;
	if(n==1){
		t=a;
	}else{
		t= Solution(a,n/2,c);
		t=(t*t)%c;
		if(n%2==1){
			t=(t*a)%c;
		}
	}
	return t;
}

ll Modulo(string str, ll a, ll len){
	ll x=0;
	ll i=0;
	while(i<len){
		x=(x*10 + str[i]-'0')%a;
		i++;
	}
	return x;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		ll a,b;
		string str;
		cin >> str >> b >> a;
		ll len=str.size();
		ll res=Modulo(str,a,len);
		res=Solution(res,b,a);
		cout << res << endl;
    }
    return 0;
}
