#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(k == 0){
            bool u = false;
            for(int i=0; i<n/2; i++){
                if(s[i] < s[n-i-1]){
                    u = true; break;
                }
                else if (s[i] > s[n-i-1]) break;
            }
            cout << (u ? "YES\n" : "NO\n");
        }
        else{
            char f = s[0];
            bool all = true;
            for (int i=1; i<n && all; i++){
                if (s[i] != f) all = false;
            }
        if(all) cout << "NO\n";
        else cout << "YES\n";
        }
    }
}
