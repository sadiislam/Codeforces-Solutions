#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, temp, rev=0;
    cin >> a;
    temp = a;  //storing orginal numb
    while(a){  //reversing the numb
        rev = rev*10 + a%10;
        a = a/10;
    }
    if(temp==rev)  cout << rev << "\n" << "YES" << endl;
    else  cout << rev << "\n" << "NO" << endl;
}
