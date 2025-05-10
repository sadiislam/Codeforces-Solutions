#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, r;
    cin >> s;
    r = s;  //copy for comparison
    reverse(r.begin(), r.end());  //reversing r
    if(s==r) cout << "YES\n";
    else cout << "NO\n";
}
