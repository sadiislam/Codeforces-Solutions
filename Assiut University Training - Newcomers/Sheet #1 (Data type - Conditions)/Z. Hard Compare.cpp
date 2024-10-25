#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    //using log to avoid large number
    if (b * log(a) > d * log(c))  //a^b > c^d = loga^b > logc^d = bloga > dlogc
        cout << "YES" << endl;
    else  cout << "NO" << endl;
}
