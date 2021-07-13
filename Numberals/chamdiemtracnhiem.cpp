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

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
		char b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
		char c[15];
		int n;
		cin >> n;
		FOR(i,0,14){
			cin >> c[i];
		}
		if(n==101){
			int count=0;
			FOR(i,0,14){
				if(c[i]==a[i]){
					count++;
				}
			}
			//cout << count;
			float res= ((float)(count)/15)*10;
			cout << fixed << setprecision(2) << res;
		}else if(n==102){
			int count=0;
			FOR(i,0,14){
				if(c[i]==b[i]){
					count++;
				}
				//cout << count;
			}
			float res= ((float)(count)/15 )*10;
			cout << fixed << setprecision(2) << res;
		}
		cout << endl;
    }
    return 0;
}
