#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int d = count(s.begin(),s.end(),'-');
        int u = count(s.begin(),s.end(),'_');
        long long maxC = 0;
        for(int i=0; i<=n; i++){
            long long ld = min(i, d);
            long long us = min(n-i, u);
            long long rd = min(d-ld, n-i-us);
            maxC = max(maxC, ld*us*rd);
        }
        cout << maxC << endl;
    }
}
