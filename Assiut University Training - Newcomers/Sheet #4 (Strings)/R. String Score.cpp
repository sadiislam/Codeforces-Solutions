#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i=0, sc=0;
    cin >> n;
    string s;
    cin >> s;
    while(i<s.size()){
        if(s[i]=='V')  sc+=5;
        else if(s[i]=='W')  sc+=2;
        else if(s[i]=='X')  i++;
        else if(s[i]=='Y' && i+1<s.size()){
            s.push_back(s[i+1]);  i++;
        }
        else if(s[i]=='Z' && i+1<s.size()){
            if(s[i+1]=='V'){
                sc/=5;  i++;
                }
            else if(s[i+1]=='W'){
                sc/=2;  i++;
                }
        }
        i++;
    }
    cout << sc << "\n";
}
