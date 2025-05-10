#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int f=0;
    while(cin>>s){  //each word iteration
        reverse(s.begin(),s.end());
        if(f) cout<<" ";
        f=1;  //to add space after skip first word
        cout << s;  //print each word
    }
}
