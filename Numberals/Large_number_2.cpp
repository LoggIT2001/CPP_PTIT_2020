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
		string s1,s2;
        cin >> s1 >> s2;
        if(s1.length()>s2.length()) swap(s1,s2);
        int n1=s1.length();
        int n2=s2.length();
        string str="";
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        int car=0;
        for(int i=0;i<n1;i++){
            int sum=((s1[i]-'0')+(s2[i]-'0')+car);
            str.push_back(sum%10+'0');
            car=sum/10;
        }
        for(int i=n1;i<n2;i++){
            int sum=((s2[i]-'0')+car);
            str.push_back(sum%10+'0');
            car=sum/10;
        }
        if(car) str.push_back(car+'0');
        reverse(str.begin(),str.end());
        cout << str << endl;
    }
    return 0;
}
