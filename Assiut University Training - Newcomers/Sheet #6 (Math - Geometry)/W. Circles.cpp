#include<bits/stdc++.h>
using namespace std;
int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double cx1=(x1+x2)/2, cx2=(x3+x4)/2, cy1=(y1+y2)/2, cy2=(y3+y4)/2;
    double r1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/2, r2=sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4))/2;
    double d=sqrt((cx1-cx2)*(cx1-cx2)+(cy1-cy2)*(cy1-cy2));
    if(d<=r1+r2) cout << "YES\n";
    else cout << "NO\n";
}
