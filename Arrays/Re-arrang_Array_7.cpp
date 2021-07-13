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

bool Solution(string x, string y){
	string xy=x.append(y);
	string yx=y.append(x);
	return xy.compare(yx)>0?true:false;
}

void Sort(string a[], int n){
	sort(a,a+n,Solution);
	FOR(i,0,n-1){
		cout << a[i];
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
		string a[n+5];
		FOR(i,0,n-1){
			cin >> a[i];
		}
		Sort(a,n);
		cout << endl;
    }
    return 0;
}
