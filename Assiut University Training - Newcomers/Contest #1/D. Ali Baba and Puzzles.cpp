#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    ((a+b*c)==d || (a+b-c)==d || (a*b-c)==d || (a*b+c)==d || (a-b*c)==d || (a-b+c)==d )? cout << "YES\n": cout << "NO\n";
}
