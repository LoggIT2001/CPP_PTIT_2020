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

void Solution(string s){
	vector<string> vt;
	string tmp="";
	string sp=s+"$";
	FOR(i,0,sp.size()-1){
		if(sp[i]==' ' || sp[i]=='$'){
			vt.pb(tmp);
			tmp="";
		}else{
			tmp+=sp[i];
		}
	}
	reverse(vt.begin(),vt.end());
	FOR(i,0,vt.size()-1){
		cout << vt[i] << " ";
	}
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;
	
    int test;
    cin >> test;
    CIG;
    while(test--){
		string s;
		getline(cin,s);
		Solution(s);
		cout << endl;
    }
    return 0;
}
