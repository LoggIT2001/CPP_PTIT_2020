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

void Solution(int a[], int n){
	int even=n/2;
	int odd=n-even;
	int tmp[n+5];
	FOR(i,0,n-1){
		tmp[i]=a[i];
	}
	sort(tmp,tmp+n);
	int j=odd-1;
	for(int i=0;i<n;i+=2){
		a[i]=tmp[j];
		j--;
	}
	j=odd;
	for(int i=1;i<n;i+=2){
		a[i]=tmp[j];
		j++;
	}
	FOR(i,0,n-1){
		cout << a[i] << " ";
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
		int a[n+5];
		FOR(i,0,n-1){
			cin >> a[i];
		}
		Solution(a,n);
		cout << endl;
    }
    return 0;
}
