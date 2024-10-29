#include <bits/stdc++.h>
using namespace std;

bool isFractional(double num) {  //function
    return num != static_cast<long long>(num);  //checking if int double variable num equal to long long num
}

int main() {
    double n, k, a, ans;
    cin >> n >> k >> a;
    ans = (n * k) / a;

    if (ans <= 2147483647 && !isFractional(ans)) {  //!isFractional(ans) returns true if ans not have fractional
        cout << "int" << endl;
    } else if (ans > 2147483647 && ans <= 9223372036854775807 && !isFractional(ans)) {
        cout << "long long" << endl;
    } else {
        cout << "double" << endl;
    }
}
