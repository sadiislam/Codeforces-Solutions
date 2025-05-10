#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sum=0;
    for(int i=0; i<s.size(); i++){
        sum += s[i] - '0';  //converting char to int and add to sum
    }
    cout << sum << "\n";
}

