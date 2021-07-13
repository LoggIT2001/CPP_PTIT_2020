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
#define FOR(i,n,m) for(int i=n;i<m;i++)
#define FORD(i,n,m) for(int i=m;i>=n;i--)
#define reset(A) memset(A,0,sizeof(A))
#define FILEIN freopen("inputDTL.txt","r",stdin)
#define FILEOUT freopen("outputDTL.txt","w",stdout)

/**********DTL**********/

long long const mod=1e9+7;
int const MAX=1e5+5;

/**********DTL**********/

struct data{
	int val1,i,val2;
};

/**********DTL**********/

bool cmp(data a, data b){
	if(a.val2 >b.val2) return false;
	if(a.val2==b.val2 && a.i>b.i) return false;
	return true;
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n,x;
		cin >> n >> x;
		vector<data> vt(n);
		FOR(i,0,n){
			cin >> vt[i].val1;
			vt[i].val2=abs(x-vt[i].val1);
			vt[i].i=i;
		}
		sort(vt.begin(),vt.end(),cmp);
		FOR(i,0,vt.size()){
			cout << vt[i].val1 << " ";
		}
		cout << endl;
    }
    return 0;
}
