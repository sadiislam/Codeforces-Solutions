#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, maxVal, minVal, mid;
    cin >> a >> b >> c;

    maxVal = max(a, max(b, c));
    minVal = min(a, min(b, c));
    mid = a + b + c - maxVal - minVal;
    cout << minVal << "\n" << mid << "\n" << maxVal << "\n\n" << a << "\n" << b << "\n" << c << endl;
}
