#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c, f=1;
    cin >> n;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            c=0;
            while(n%i==0){
                n/=i; c++;
            }
            if(!f) cout << "*";
            cout << "(" << i << "^" << c << ")";
            f=0;
        }
    }
    if(n>1){
    if(!f) cout << "*";
    cout << "(" << n << "^1" << ")";
    }
    cout << "\n";
}


