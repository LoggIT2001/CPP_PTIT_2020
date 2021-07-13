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
//#define s second
#define FOR(i,n,m) for(int i=n;i<m;i++)
#define FORD(i,n,m) for(int i=m;i>=n;i--)
#define reset(A) memset(A,0,sizeof(A))
#define FILEIN freopen("inputDTL.txt","r",stdin)
#define FILEOUT freopen("outputDTL.txt","w",stdout)

/**********DTL**********/

long long const mod=1e9+7;
int const MAX=1e5+5;

/**********DTL**********/

/**********DTL**********/

ll tong(ll n){
	ll sum=0;
	if(n>0){
			while(n>0){
				sum+=n%10;
				n/=10;
			}
		}else{
			while(n<0){
				sum-=n%10;
				n/=10;
			}
		}
	return sum;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		string s;
		cin >> s;
		//ll sum=0;
		cout << s;
/*		if(s[0]!='-'){
			FOR(i,0,s.size()){
				sum+=(s[i]-'0');
			}
		}else{
			FOR(i,1,s.size()){
				sum-=(s[i]-'0');
			}
		}
		//cout << sum << endl;
*/	
    }
    return 0;
}
