#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, k, p;
    cin >> t;
    while(t--){
        cin >> n >> k >> p;
        int maxS = n*p, minS = n*(-p);
        if(k>maxS || k<minS) cout << -1 << endl;
        else{
            int nOp = (abs(k)+p-1)/p;
            cout << (nOp>n ? -1:nOp) << endl;
        }
    }
}
