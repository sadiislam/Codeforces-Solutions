#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    cin >> n;
    int fib[n+5];
    fib[1]=0;
    fib[2]=1;
    for(i=1; i<=n; i++){
        if(i==1 || i==2) cout << fib[i] << " ";
        else{
            fib[i] = fib[i-1] + fib[i-2];
            cout << fib[i] << " ";
        }
    }
    cout << endl;
}
