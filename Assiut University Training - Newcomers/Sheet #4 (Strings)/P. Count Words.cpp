#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int c=1;
    for(int i=1; i<s.size(); i++){
            if(!(s[i]>='A' && s[i]<='z') && s[i+1]>='A' && s[i+1]<='z') c++;
            else continue;
    }
    cout << c << "\n";
}
