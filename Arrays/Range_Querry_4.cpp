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

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n;
		cin >> n;
		ll a[n+5];
		ll Max;
		bool check=false;
		FOR(i,1,n){
			cin >> a[i];
			if(a[i]>0) check=true;
			if(i==1){
				Max=a[i];
			}else{
				if(Max<a[i]) Max=a[i];
			}
		}
		if(!check) cout << Max << endl;
		else{
			ll sum=0, res=a[1];
			FOR(i,1,n){
				if(a[i]+sum<0){
					sum=0;
					continue;
				}
				sum+=a[i];
				if(sum>res) res=sum;
			}
			cout << res << endl;
		}
    }
    return 0;
}