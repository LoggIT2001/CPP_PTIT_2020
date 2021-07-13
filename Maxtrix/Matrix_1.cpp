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
		int n, m;
		cin >> n >> m;
		int cot=m, hang=n;
		int a[n+5][m+5];
		FOR(i,0,n-1){
			FOR(j,0,m-1){
				cin >> a[i][j];
			}
		}
		int row=0, col=0;
		int prev, curr;
		while(row<n && col<m){
			if(row+1==n || col+1==m) break;
			prev=a[row+1][col];
			FOR(i,col,m-1){
				curr=a[row][i];
				a[row][i]=prev;
				prev=curr;
			}
			row++;
			FOR(i,row,n-1){
				curr=a[i][m-1];
				a[i][m-1]=prev;
				prev=curr;
			}
			m--;
			if(row<n){
				FORD(i,col,m-1){
					curr=a[n-1][i];
					a[n-1][i]=prev;
					prev=curr;
				}
			}
			n--;
			if(col<m){
				FORD(i,row,n-1){
					curr=a[i][col];
					a[i][col]=prev;
					prev=curr;
				}
			}
			col++;
		}
		FOR(i,0,hang-1){
			FOR(j,0,cot-1){
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
    }
    return 0;
}
