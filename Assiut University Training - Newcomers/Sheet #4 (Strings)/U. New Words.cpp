#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ec=0, gc=0, yc=0, pc=0, tc=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='e' || s[i]=='E') ec++;
        if(s[i]=='g' || s[i]=='G') gc++;
        if(s[i]=='y' || s[i]=='Y') yc++;
        if(s[i]=='p' || s[i]=='P') pc++;
        if(s[i]=='t' || s[i]=='T') tc++;
    }
    int t = min(ec, min(gc, min(yc, min(pc,tc))));
    cout << t << "\n";
}
