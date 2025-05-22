#include<bits/stdc++.h>
using namespace std;
int main(){
    double r, s;
    cin >> r >> s;
    if(s*sqrt(2) <= r*2) cout << "Circle\n";
    else if(s >= r*2) cout << "Square\n";
    else cout << "Complex\n";
}
