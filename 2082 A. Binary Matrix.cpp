#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> r(n,0), c(m,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                char x; cin >> x;
                r[i] ^= (x-'0');  c[j] ^= (x-'0');
            }
        }
        int oddr = 0, oddc = 0;
        for(int i=0; i<n; i++) oddr += r[i];
        for(int j=0; j<m; j++) oddc += c[j];
        cout << max(oddr,oddc) << endl;
    }
}
