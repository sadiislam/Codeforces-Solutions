#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, s=0;
    cin >> n;
    for(long long i=1; i*i<=n; i++) {
        if(n%i==0){
            s+=i;
            if(i!=n/i) s+=n/i;
        }
    }
    cout << s << "\n";
}

