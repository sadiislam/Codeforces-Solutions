#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    long long x, r=0;
    cin >> n >> x;
    for(char c:n) r=(r*10+(c-'0'))%x;
    if(r==0) cout << "YES\n";
    else cout << "NO\n";
}

