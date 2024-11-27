#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t, l, r;
    cin >> t;
    while(t--){
        cin >> l >> r;
        if (l > r) swap(l, r);  //Ensure l is less than or equal to r
        l--;  //Decrement l to use formula correctly
        long long sum1 = l*(l + 1) / 2;  //Sum from 1 to l
        long long sum2 = r*(r + 1) / 2;  //Sum from 1 to r
        cout << sum2 - sum1 << endl;   //Sum from l+1 to r
    }
}
