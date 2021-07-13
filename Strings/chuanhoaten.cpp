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
		string str;
		getline(cin,str);
		int v1,v2;
		vector<string> vt1;
		vector<char> vt2;
		int count=0;
		FOR(i,0,str.size()){
			if(str[i]>='A' && str[i]<='Z'){
				str[i]=str[i]+32;
			}
			if(str[i]==' '){
				count++;	
			}
		}
		str[0]-=32;
		FOR(i,0,str.size()){
			if(str[i]==' ' && count>1){
				str[i+1]-=32;
			}
		}
		FOR(i,0,str.size()){
			if(str[i]==' '){
				v2=i;
				break;
			}
		}
		FORD(i,0,str.size()-1){
			if(str[i]==' '){
				v1=i;
				break;
			}
		}
		string s1="";
		FOR(i,0,v2){
			s1+=str[i];
		}
		vt1.push_back(s1);
		FOR(i,v1+1,str.size()){
			str[i]-=32;
			vt2.pb(str[i]);
		}
		
    //}
    return 0;
}
