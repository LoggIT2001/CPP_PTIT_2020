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

/**********DTL**********/

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    //int test;
    //cin >> test;
    //while(test--){
    	while(1){
    		char P[28]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_', '.'};
			int k;
			string s;
			cin >> k;
			if(k==0){
				return 0;
			}else{
				cin >> s;
				FOR(i,0,s.size()){
					if(s[i] >='A' && s[i] <= 'Z'){
						int x=(int)(s[i]-'0')-16;
						s[i]=P[(x+k-1)%28];
					}else if(s[i]=='.'){
						int x=(s[i]-'0')+3;
						s[i]=P[(27+k)%28];
					}else if(s[i]=='_'){
						s[i]=P[(26+k)%28];
					}
				}
				reverse(s.begin(),s.end());
				cout << s;
			}
			cout << endl;
		}
    //}
    return 0;
}
