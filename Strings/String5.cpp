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

struct Key{
	int freq;
	char ch;
	bool operator<(const Key& k) const {
		return freq<k.freq;
	}
};

/**********DTL**********/

void Solution(string s){
	int n=s.size();
	int count[26]={0};
	FOR(i,0,n-1){
		count[s[i]-'a']++;
	}
	priority_queue<Key> pq;
	for(char c='a';c<='z';c++){
		if(count[c]){
			pq.push(Key{count[c], c});
		}
	}
	s="";
	Key prev{-1,'#'};
	while(!pq.empty()){
		Key k=pq.top();
		pq.pop();
		s=s+k.ch;
		if(prev.freq >0){
			pq.push(prev);
		}
		(k.freq)--;
		prev=k;
	}
	if(n!=s.size()){
		cout << "0" << endl;
	}else{
		cout << "1" << endl;
	}
}

/**********main function**********/

int main(){
    FastIO; IN; OUT;

    int test;
    cin >> test;
    while(test--){
		string s;
		cin >> s;
		Solution(s);
    }
    return 0;
}
