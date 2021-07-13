/******<CODE NEVER DIE>******/
#include<bits/stdc++.h>
#include<unordered_map>
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

int Solution(bool a[], bool b[], int n){
	int x[n];
	FOR(i,0,n-1){
		x[i]=a[i]-b[i];
	}
	unordered_map<int, int> hm;
	int sum=0;
	int max_len=0;
	FOR(i,0,n-1){
		sum+=x[i];
		if(sum==0){
			max_len=i+1;
		}
		if(hm.find(sum)!=hm.end()){
			max_len=max(max_len,i-hm[sum]);
		}else{
			hm[sum]=i;
		}
	}
	return max_len;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n;
		cin >> n;
		bool a[n+5];
		bool b[n+5];
		FOR(i,0,n-1){
			cin >> a[i];
		}
		FOR(i,0,n-1){
			cin >> b[i];
		}
		cout << Solution(a,b,n) << endl;
    }
    return 0;
}
