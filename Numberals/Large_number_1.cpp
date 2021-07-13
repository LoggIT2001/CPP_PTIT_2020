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

void Solution(string a, string b){
	int k=0,a1[10000],b1[10000];
	for (int i=0;i<a.length()-b.length();i++){
		b1[i]=0;
		a1[i]=a[i]-48;
	}
	for (int i=a.length()-b.length();i<a.length();i++){
		b1[i]=b[k]-48;
		a1[i]=a[i]-48;
		k++;
	}
	int nho=0;
	for (int i=a.length()-1;i>=0;i--){
		b1[i]+=nho;
		if (a1[i]-b1[i]>=0) {
			a1[i]=a1[i]-b1[i];
			nho=0;
		}else{
			a1[i]=10+(a1[i]-b1[i]);
			nho=1;
		}
	}
	for (int i=0;i<a.length();i++){
		cout<<a1[i];
	}
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		string a,b;
		int x=2;
		cin >> a >> b;
		int c=0;
		if (a.length()>b.length()) x= 1;
		if (a.length()<b.length()) x= 0;
		if (a.length()==b.length()){
		for (int i=0;i<a.length();i++){
			if(a[i]>b[i]) {x= 1;break;}
			if(a[i]<b[i]) {x= 0;break;}
			}
		}	
		if (x==2) cout<<"0";
		if(x==1)Solution(a,b);
		if(x==0)Solution(b,a);
		cout<<endl;
    }
    return 0;
}
