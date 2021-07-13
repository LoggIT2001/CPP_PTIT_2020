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

void Solution(int a[100][100], int n, int m){
	int hang[100],cot[100];
	FOR(i,1,n){
		FOR(j,1,m){
			if(a[i][j]==1){
				hang[i]=1;
				cot[j]=1;
			}
		}
	}
	FOR(i,1,n){
		FOR(j,1,m){
			if(hang[i]==1 || cot[j]==1){
				a[i][j]=1;
			}
		}
	}
	FOR(i,1,n){
		FOR(j,1,m){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n,m;
		cin >> n >> m;
		int a[100][100];
		FOR(i,1,n){
			FOR(j,1,m){
				cin >> a[i][j];
			}
		}
		Solution(a,n,m);
    }
    return 0;
}
