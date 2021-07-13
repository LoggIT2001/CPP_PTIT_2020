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
//#define s second
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

	//CIG;
    //int test;
    //cin >> test;
    //while(test--){
    	vector<char> vt;
		string s1;
		getline(cin,s1);
		int count=0;
		FOR(i,0,s1.size()){
			if(s1[i]>='A' && s1[i]<='Z'){
				s1[i]=s1[i]+32;
			}
			if(s1[i]==' '){
				count++;
			}
		}
		vt.push_back(s1[0]);
		FOR(i,0,s1.size()){
			if(s1[i]==' ' && count>1){
				vt.push_back(s1[i+1]);
				count--;
			}
		}
		int vtt;
		FORD(i,0,s1.size()-1){
			if(s1[i]==' '){
				vtt=i;
				break;
			}
		}
		FOR(i,vtt+1,s1.size()){
			vt.push_back(s1[i]);
		}
		FOR(i,0,vt.size()){
			cout << vt[i];
		}
		cout << "@ptit.edu.vn";
    //}
    return 0;
}
