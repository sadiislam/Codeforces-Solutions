#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int ms = 2*m;
        int r1 = min(a, m);
        int r2 = min(b, m);
        int rs = ms-(r1 + r2);
        int np = min(c, rs);
        int ts = r1 + r2 + np;
        cout << ts << endl;
    }
}
