#include<bits/stdc++.h>
using namespace std;
int main(){
    double n, d=0;
    cin >> n;
    if(n==0 || n==1){
        cout << "Number of digits of " << n << "! is 1\n";
        return 0;
    }
    for(int i=2; i<=n; i++) d+= log10(i);
    cout << "Number of digits of " << n << "! is " << int(d)+1 << "\n";
}
