#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string s, t;
        cin >> s >> t;
        int m = max(s.size(), t.size());
        for(int i=0; i<m; i++){  //iterate to max length
            if(i<s.size()) cout << s[i]; //prints a char from both string until end
            if(i<t.size()) cout << t[i];
        }
        cout << "\n";
    }
}
