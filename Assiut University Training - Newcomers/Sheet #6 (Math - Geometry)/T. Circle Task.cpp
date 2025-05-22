#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x, y, r, n;
    cin >> x >> y >> r >> n;
    while(n--){
        long long a, b;
        cin >> a >> b;
        long long dx=a-x, dy=b-y;
        if(dx*dx+dy*dy <= r*r) cout << "YES\n";
        else cout << "NO\n";
    }
}
