#include<bits/stdc++.h>
using namespace std;

void f(int n, char c){
    for(int i=0; i<n; i++) cout << c << " ";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        f(n,c);
        cout << "\n";
    }
}

