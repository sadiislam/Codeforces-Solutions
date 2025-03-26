#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, a, sum=0;;
    cin >> n;
    while(n--){
        cin >> a;
        sum+=a;
    }
    cout << abs(sum) << endl;
}
