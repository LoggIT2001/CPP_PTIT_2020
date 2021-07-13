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
/*
bool Solution(string s, int k){
	if(s.size()<26) return false;
	int vit[26];
	FOR(i,0,s.size()-1){
		vit[s[i]-'a']=true;
	}
	int count=0;
	FOR(i,0,25){
		if(!vit[i]){
			count++;
		}
	}
	if(count<=k) return true;
	return false;
}
*/
/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		bool kt[1000005];
		memset(kt,false,sizeof(kt));
		FOR(i,0,s.size()-1){
			kt[s[i]]=true;
		}
		int count=0;
		FOR(i,'a','z'){
			if(!kt[i]){
				count++;
			}
		}
		if(count<=k) cout << "1" << endl;
		else cout << "0" << endl;
    }
    return 0;
}
