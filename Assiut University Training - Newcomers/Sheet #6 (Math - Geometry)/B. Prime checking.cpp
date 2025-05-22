#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    if(n<2) cout << "NO\n";
    else if(n==2) cout << "YES\n";
    else{
        bool p=1;
        for(long long i=2; i*i<=n; i++){
            if(n%i==0){
                p=0; break;
            }
        }
        if(p) cout << "YES\n";
        else cout << "NO\n";
    }
}
