#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string a="", b="010", c="101";
        int d=0;
        for(int i=0; i<s.size(); i++){
            a = s.substr(i,3);  //take 3 char
            if(a==b || a==c){
                d++;
                cout << "Good\n";
                break;  //if found exit
            }
        }
        if(d==0) cout << "Bad\n";
    }
}
