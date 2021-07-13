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

int UCLN(int a, int b){
	while(b!=0){
		int x=a%b;
		a=b;
		b=x;
	}
	return a;
}

int Prime(int x){
	if(x<2) return 0;
	FOR(i,2,sqrt(x)){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int x;
		cin >> x;
		int d=0;
		FOR(i,1,x){
			if(UCLN(i,x)==1){
				d++;
			}
		}
		if(Prime(d)==1){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
    }
    return 0;
}
