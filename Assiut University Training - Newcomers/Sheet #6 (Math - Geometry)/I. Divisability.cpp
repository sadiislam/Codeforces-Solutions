#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, x, f, l, n, s;
    cin >> a >> b >> x;
    if(a>b) swap(a,b);
    f=(a+x-1)/x*x; l=(b/x)*x;
    if(f>b) cout << 0 << "\n";
    else{
        n=(l-f)/x+1; s=n*(f+l)/2;
        cout << s << "\n";
    }
}

