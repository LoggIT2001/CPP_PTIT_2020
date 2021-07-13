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
#define se second
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
		string s;
		cin >> s;
		int sum=0;
		vector<int> vt;
		FOR(i,0,s.size()-2){
			if((s[i]>='0' && s[i]<='9')){
				sum=sum*10 + s[i]-'0';
			}else{
				vt.pb(sum);
				sum=0;
			}
		}
		sort(vt.begin(),vt.end(),greater<int>());
		cout << vt[0] << endl;
    }
    return 0;
}
