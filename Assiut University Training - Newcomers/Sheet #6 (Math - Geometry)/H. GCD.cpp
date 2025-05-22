#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    if(a<b) swap(a,b);
    long long n1=a, n2=b, rem, gcd;
    while(n2!=0){
        rem=n1%n2;
        n1=n2; n2=rem;
    }
    if(n2==0) gcd=n1;
    long long lcm=(a*b)/gcd;
    cout << gcd << " " << lcm << "\n";
}
