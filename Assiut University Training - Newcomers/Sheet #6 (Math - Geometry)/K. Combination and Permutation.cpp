#include<bits/stdc++.h>
using namespace std;

long long fact(int x){
    long long s=1;
    for(int i=2; i<=x; i++) s*=i;
    return s;
}

int main(){
    int a, b;
    cin >> a >> b;
    long long p=fact(a)/fact(a-b), c=fact(a)/(fact(b)*fact(a-b));
    cout << c << " " << p << "\n";
}
