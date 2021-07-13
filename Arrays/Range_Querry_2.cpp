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

bool Solution(int L, int R, int a[]){
	int mid=(R+L)/2;
	FOR(i,L,mid-1){
		if(a[i]>a[i+1]) return false;
	}
	FOR(i,mid,R-1){
		if(a[i]<a[i+1]) return false;
	}
	return true;
}

bool Check(int a[],int n){
	FOR(i,0,n-2){
		if(a[i]>a[i+1]) return false;
	}
	return true;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n;
		cin >> n;
		int a[n+5];
		FOR(i,0,n-1){
			cin >> a[i];
		}
		int L,R;
		cin >> L >> R;
		if(Check(a,n)){
			cout << "Yes" << endl;
		}else{
			if(Solution(L,R,a)){
				cout << "Yes" << endl;
			}else{
				cout << "No" << endl;
			}
		}
    }
    return 0;
}
