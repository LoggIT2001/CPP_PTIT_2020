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

int a[10005];

/**********DTL**********/

void SangNT(){
	FOR(i,2,10001){
		a[i]=1;
	}
	FOR(i,2,10001){
		if(a[i]==1){
			for(int j=i*i;j<=10001;j+=i){
				a[j]=0;
			}
		}
	}
}

void Solution(int n){
	if(a[n]==1){
		cout << "0";
	}else{
		int check=0;
		FOR(i,2,n){
			if(n%i==0 && a[i]==1){
				n/=i;
				check++;
				a[i]=0;
			}
		}
		if(check==3 && n==1) cout << "1";
		else cout << "0";
	}
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n;
		cin >> n;
		SangNT();
		Solution(n);
		cout << endl;
    }
    return 0;
}
