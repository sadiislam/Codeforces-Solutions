#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long f[53];  //as n under 50
    f[1]=0; f[2]=1;  //first 2 fibonacci
    for(int i=3; i<=n; i++){  //iterative approach, loop from 3 to input
        f[i] = f[i-1] + f[i-2];  //sum previous two fibonacci numb
    }
    cout << f[n] << endl;
}
