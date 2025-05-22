#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    if(a>b) swap(a,b);
    long long asum=(b-a+1)*(a+b)/2;

    long long fe=(a%2==0) ? a : a+1, le=(b%2==0) ? b : b-1;
    long long ce=(fe<=le) ? (le-fe)/2+1 : 0;
    long long esum= ce*(fe+le)/2;

    long long fo=(a%2==1) ? a : a+1, lo=(b%2==1) ? b : b-1;
    long long co=(fo<=lo) ? (lo-fo)/2+1 : 0;
    long long osum= co*(fo+lo)/2;

    cout << asum << "\n" << esum << "\n" << osum << "\n";
}

