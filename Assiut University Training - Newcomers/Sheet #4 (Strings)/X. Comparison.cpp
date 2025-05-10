#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string r=s;  //if length 1
    for(int i=1; i<s.size(); i++){
        string x=s.substr(0,i), y=s.substr(i);
        sort(x.begin(),x.end()); sort(y.begin(),y.end());
        string c=x+y;
        if(c<r) r=c;
    }
    cout << r << "\n";
}
