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
		int n,m;
		cin >> n >> m;
		int d[100005]={0};
		FOR(i,1,n+m){
			int x;
			cin >> x;
			d[x]++;
		}
		vector<int> vt1;
		vector<int> vt2;
		FOR(i,1,100000){
			if(d[i]>0) vt1.pb(i);
		}
		FOR(i,1,100000){
			if(d[i]>1) vt2.pb(i);
		}
		sort(vt1.begin(),vt1.end());
		sort(vt2.begin(),vt2.end());
		FOR(i,0,vt1.size()-1){
			cout << vt1[i] << " ";
		}
		cout << endl;
		FOR(i,0,vt2.size()-1){
			cout << vt2[i] << " ";
		}
		cout << endl;
    }
    return 0;
}
