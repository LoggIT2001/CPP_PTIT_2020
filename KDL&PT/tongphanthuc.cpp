#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    float sum=0;
    for(int i=2;i<=n;i++){
        sum+=(float)(1/(float)i);
    }
    cout << fixed << setprecision(4) << sum+1;
    return 0;
}
