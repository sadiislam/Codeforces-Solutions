#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long sum=0, c=0;
    for (long long i=1; ; i++){
        if(sum+i>n) break;
        sum+=i; c++;
    }
    cout << c << "\n";
}
