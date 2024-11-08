#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, i;
    cin >> x;
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            cout << "NO" << endl;
            return 0;  //signal that program has found required ans
        }
    }
    cout << "YES" << endl;
    return 0;
}
