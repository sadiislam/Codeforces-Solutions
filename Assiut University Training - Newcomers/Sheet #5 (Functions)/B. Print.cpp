#include<bits/stdc++.h>
using namespace std;

void f(int n){
    for(int i=1; i<n; i++) cout << i << " ";
    cout << n;  //"1 2 3 4 5", not "1 2 3 4 5 "
}

int main(){
    int n;
    cin >> n;
    f(n);
    cout << "\n";
}
