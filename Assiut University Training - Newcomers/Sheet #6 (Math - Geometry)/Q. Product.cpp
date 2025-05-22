#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l, r, m, s=1;
    cin >> l >> r >> m;
    for(long long i=l; i<=r; i++) s=(s*i)%m;
    cout << s << "\n";
}
