#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='?'){
            i++;
            while(i<s.size()){
                if(s[i]=='=') cout << ": ";
                else if(s[i]=='&') cout << "\n";
                else cout << s[i];
                i++;
            }
            cout << "\n";
        }
    }
}
