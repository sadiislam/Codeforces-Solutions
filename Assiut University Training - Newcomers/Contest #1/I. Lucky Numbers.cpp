#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, f, s, mi, ma;
    cin >> n;
    f = n / 10;  s = n % 10;  //finding two digit
    mi = min(f, s);  ma = max(f, s);  //checking large & small digit

    if (mi == 0) cout << "YES" << endl;  //for dividing by 0
    else if (ma % mi == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

