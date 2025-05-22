#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long x=1;
    while(x<n) x*=2;
    if(x==n) cout << "YES\n";
    else cout << "NO\n";
}
