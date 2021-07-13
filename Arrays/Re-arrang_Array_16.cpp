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
		int val=-1;
		int len=s.length();
		FORD(i,0,len-1){
			if(s[i]<s[i-1]){
				val=i-1;
				break;
			}
		}
		int r_val=-1;
		for(int i=len-1;i>val;i--){
			if(s[i]<s[val]){
				if(r_val==-1) r_val=i;
				else if(s[i]>=s[r_val]){
					r_val=i;
				}
			}
		}
		if(val==-1){
			cout << "-1";
		}else{
			swap(s[val],s[r_val]);
			FOR(i,0,len-1){
				cout << s[i];
			}
		}
		cout << endl;
    }
    return 0;
}
