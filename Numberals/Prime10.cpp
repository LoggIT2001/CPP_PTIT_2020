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

bool Check(int x){
	if(x==2) return true;
	FOR(i,2,sqrt(x)){
		if(x%i==0) return false;
	}
	return true;
}

int SumCS(int a){
	int t=0;
	while(a!=0){
		t=t+a%10;
		a=a/10;
	}
	return t;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n;
		cin >> n;
		int Sum1=0,Sum2=0;
		int dem;
		if(!Check(n)){
			Sum1=SumCS(n);
			int i=2;
			while(n!=1){
				dem=0;
				while(n%i==0 && n!=1){
					dem++;
					n/=i;
				}
				if(dem>0) Sum2+=dem*SumCS(i);
				i++;
			}
			if(Sum1==Sum2) cout << "YES" << endl;
			else cout << "NO" << endl;
		}else{
			cout << "NO" << endl;
		}
    }
    return 0;
}
