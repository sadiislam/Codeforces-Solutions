#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a, b, c, d, result;
    cin >> a >> b >> c >> d;
    a%=100;  //%100 gives last 2 digit
    b%=100;  //separate task to avoid sum overflow
    c%=100;
    d%=100;
    result = (a * b * c * d) % 100; //again fetch 2 digit of sum
    cout << (result < 10 ? "0" : "") << result << endl;
}

