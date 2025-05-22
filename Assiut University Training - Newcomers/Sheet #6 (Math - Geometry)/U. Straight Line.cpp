#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int a=(y3-y2)*(x2-x1), b=(y2-y1)*(x3-x2);
    if(a==b) cout << "YES\n";
    else cout << "NO\n";
}

