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

struct pq{
	int val, index, count;
};

/**********DTL**********/

bool mycomp(struct pq a, struct pq b){
	return (a.val<b.val);
}

bool mycomp2(struct pq a, struct pq b){
	if(a.count != b.count){
		return (a.count<b.count);
	}else{
		return (a.index>b.index);
	}
}

void Sorting(long long a[], int n){
	struct pq element[n];
	for(int i=0;i<n;i++){
		element[i].index=i;
		element[i].count=0;
		element[i].val=a[i];
	}
	stable_sort(element,element+n,mycomp);
	element[0].count=1;
	for(int i=1;i<n;i++){
		if(element[i].val==element[i-1].val){
			element[i].count+=element[i-1].count+1;
			element[i-1].count=-1;
			element[i].index=element[i-1].index;
		}else{
			element[i].count=1;
		}
	}
	stable_sort(element,element+n,mycomp2);
	for(int i=n-1,index=0;i>=0;i--){
		if(element[i].count!=-1){
			for(int j=0;j<element[i].count;j++)
				a[index++]=element[i].val;
		}
	}
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		int n;
		cin >> n;
		ll a[n+5];
		FOR(i,0,n-1){
			cin >> a[i];
		}
		Sorting(a,n);
		FOR(i,0,n-1){
			cout << a[i] << " ";
		}
		cout << endl;
    }
    return 0;
}
