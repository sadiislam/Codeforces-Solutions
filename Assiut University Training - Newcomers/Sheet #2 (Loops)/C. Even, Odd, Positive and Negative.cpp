#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, e=0, o=0, p=0, n=0;
    cin >> a;
    while(a--){
        cin >> b;
        if(b%2==0) e++;
        if(b%2!=0) o++;
        if(b>0) p++;
        if(b<0) n++;
    }
    cout << "Even: " << e << "\n" << "Odd: " << o << "\n" << "Positive: " << p << "\n" << "Negative: " << n << endl;
}

