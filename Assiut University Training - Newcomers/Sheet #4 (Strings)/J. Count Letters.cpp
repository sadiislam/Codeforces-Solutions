#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int f[128]={};  //initialize array to count(128 ASCII characters)
    for(int i=0; i<s.size(); i++)  f[s[i]]++;  //increment current char count in array
    for(int i=0; i<128; i++){  //finding non-zero counts
        if(f[i]!=0) cout << (char) i << " : " << f[i] << "\n";  //if frequency not zero, print count
    }
}
