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
#define FOR(i,n,m) for(ll i=n;i<m;i++)
#define FORD(i,n,m) for(int i=m;i>=n;i--)
#define reset(A) memset(A,0,sizeof(A))
#define FILEIN freopen("inputDTL.txt","r",stdin)
#define FILEOUT freopen("outputDTL.txt","w",stdout)

/**********DTL**********/

long long const mod=1e9+7;
int const MAX=1e5+5;

/**********DTL**********/

string a,b;

/**********DTL**********/

string Sum(){
	while(a.size()<b.size()) a="0"+a;
	while(a.size()>b.size()) b="0"+b;
	int len=a.size();
	string res="";
	ll cong=0;
	FORD(i,0,len-1){
		ll x=ll(a[i]-'0')+ll(b[i]-'0')+cong;
		res=char(x%10+'0')+res;
		cong=x/10;
	}
	if(cong>0) return char(cong+'0')+res;
	return res;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		cin >> a >> b;
		FOR(i,0,a.size()){
			if(a[i]=='6') a[i]='5';
		}
		FOR(i,0,b.size()){
			if(b[i]=='6') b[i]='5';
		}
		cout << Sum() << " ";
		FOR(i,0,a.size()){
			if(a[i]=='5') a[i]='6';
		}
		FOR(i,0,b.size()){
			if(b[i]=='5') b[i]='6';
		}
		cout << Sum() << endl;
    }
    return 0;
}
