#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, q;
    cin >> a >> b >> q;
    int r=(q-1)%3;
    if(r==0) cout << a << "\n";
    else if(r==1) cout << b << "\n";
    else cout << (a^b) << "\n";
}
