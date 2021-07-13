#include <bits/stdc++.h> 
using namespace std; 
main (){ 
int t; 
cin >> t; 
while (t>0){ 
long n; 
cin >> n; 
long long a[n]; 
for (long long i=0;i<n;i++){ 
a[i]=-1; 
} 
long long b; 
for (long long i=0;i<n;i++){ 
cin >>b; 
if (b < n && b>=0 ) a[b]=b; 
} 
for (long long i=0;i<n;i++){ 
cout << a[i]<< " "; 
} 
cout << endl; 
t--; 
} 
}
