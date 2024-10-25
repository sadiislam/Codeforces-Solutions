#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int y = n / 365;  //year
    cout << y << " years" << endl;

    int a = n - (y * 365);  //month
    int m = a / 30;
    cout << m << " months" << endl;

    int d = n - (y * 365 + m * 30);  //days
    cout << d << " days" << endl;
}


