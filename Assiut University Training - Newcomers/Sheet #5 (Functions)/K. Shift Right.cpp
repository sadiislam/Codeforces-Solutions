#include<bits/stdc++.h>
using namespace std;

void sr(int n, int a[], int x){
    for(int i=n-x; i<n; i++) cout << a[i] << " ";
    for(int i=0; i<n-x; i++) cout << a[i] << " ";
    cout << "\n";
}

int main(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    x%=n; sr(n,a,x);
}

