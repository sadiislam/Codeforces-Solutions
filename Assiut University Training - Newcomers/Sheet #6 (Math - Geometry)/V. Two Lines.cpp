#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    int dx1=x2-x1, dy1=y2-y1, dx2=x4-x3, dy2=y4-y3;
    if(dy1*dx2 == dy2*dx1) cout << "YES\n";
    else cout << "NO\n";
}

