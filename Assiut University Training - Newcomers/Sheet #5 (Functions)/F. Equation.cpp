#include<bits/stdc++.h>
using namespace std;

long long e(long long x, long long n){
    long long sum=0;  //x^0-1 always zero
    for(long long i=2; i<=n; i+=2){  //calc even as formula
        long long isum=1;
        for(long long j=0; j<i; j++) isum*=x;  //calc powers
        sum+=isum;  //adding powers
    }
    return sum;
}

int main(){
    long long x, n;
    cin >> x >> n;
    cout << e(x,n) << "\n";
}

