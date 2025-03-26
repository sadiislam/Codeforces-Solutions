#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    string s;
    cin >> a >> b >> s;
    int d=0;
    for(int i=0; i<s.size(); i++){  //full string check
        if(s[i]!='-') d++;  //counting non"-" / digits
    }
    if(s[a]=='-' && d==a+b) cout << "Yes" << endl;  //if condition matched
    else cout << "No" << endl;
}
