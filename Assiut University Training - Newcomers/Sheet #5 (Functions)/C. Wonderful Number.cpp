#include<bits/stdc++.h>
using namespace std;

bool bp(int n){
    int r;
    string b1, b2;
    while(n){
        r=n%2; n=n/2;
        if(r==0) b1+="0";
        else b1+="1";
    }
    b2=b1;
    reverse(b2.begin(), b2.end());
    if(b1==b2) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    if(n%2!=0 && bp(n)) cout << "YES\n";
    else cout << "NO\n";
}
