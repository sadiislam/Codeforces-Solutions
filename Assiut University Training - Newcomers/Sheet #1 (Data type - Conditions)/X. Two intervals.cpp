#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if((l1>l2 && l1>r2) || (r1<l2 && r1<r2)) cout << "-1" << endl;  //stick left & right separate
    else{
        int a, b;
        a = max(l1,l2);  //choosing bigger left
        b = min(r1,r2);  //choosing smaller right
        cout << a << " " << b << endl;
    }
}
