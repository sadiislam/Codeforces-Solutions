#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a){
        double s=(a+b+c)/2, ar=sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Valid\n" << fixed << setprecision(6) << ar << "\n";
    }
    else cout << "Invalid\n";
}


