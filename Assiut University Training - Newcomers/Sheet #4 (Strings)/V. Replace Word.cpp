#include<bits/stdc++.h>
using namespace std;
int main() {
    string s, r = "EGYPT";
    cin >> s;
    for(int i=0; i<s.size(); ){
        if(s.substr(i, r.size()) == r){
            cout << " ";
            i += r.size();
        }
        else cout << s[i++];
    }
}
