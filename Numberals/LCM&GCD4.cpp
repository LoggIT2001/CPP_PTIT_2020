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

int ucln(ll a, ll b){
	if(a>b){
		swap(a,b);
	}
	while(a!=0){
		int tmp=a;
		a=b%a;
		b=tmp;
	}
	return b;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		ll a;
		string b;
		cin >> a >> b;
		ll c=0;
		FOR(i,0,b.size()-1){
			c=c*10 + (b[i]-'0');
			c=c%a;
		}
		cout << ucln(a,c) << endl;
    }
    return 0;
}
