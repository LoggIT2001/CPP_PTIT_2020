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
#define FORD(i,n,m) for(int i=m;i>=n;i-a-)
#define reset(A) memset(A,0,sizeof(A))
#define FILEIN freopen("inputDTL.txt","r",stdin)
#define FILEOUT freopen("outputDTL.txt","w",stdout)

/**********DTL**********/

long long const mod=1e9+7;
int const MAX=1e5+5;

/**********DTL**********/

/**********DTL**********/

bool kt(ll a[]){
	FOR(i,1,3){
		if(a[i]!=a[i+1]) return false;
	}
	return true;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    //int test;
    //cin >> test;
    //while(test--){
		while(1){ll a[4];
		FOR(i,1,4){
			cin >> a[i];
		}
		if(a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0){
			return 0;
		}else{
			int count=0;
			while(!kt(a)){
				ll x=a[1];
				FOR(i,1,3){
					a[i]=abs(a[i]-a[i+1]);
				}
				a[4]=abs(a[4]-x);
				
				count++;
			}
			cout << count << endl;
		}
		}
    //}
    return 0;
}
