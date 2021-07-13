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

ll Solution(string str){
	ll n=str.length();
	ll odd=0, eve=0;
	for(ll i=0;i<n;i++){
		if(i%2==0){
			odd+=(str[i]-'0');
		}else{
			eve+=(str[i]-'0');
		}
	}
	return ((odd-eve)%11==0);
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		string str;
		cin >> str;
		if(Solution(str)){
			cout << "1";
		}else{
			cout << "0";
		}
		cout << endl;
    }
    return 0;
}
