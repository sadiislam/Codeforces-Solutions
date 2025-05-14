#include<bits/stdc++.h>
using namespace std;

void f(int n){
    int a[1000], b[1000], c[2000];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    for(int i=0; i<n; i++) c[i]=b[i];
    for(int i=0; i<n; i++) c[n+i]=a[i];
    for(int i=0; i<2*n; i++) cout << c[i] << " ";
    cout << "\n";
}

int main(){
    int n;
    cin >> n;
    f(n);
}
