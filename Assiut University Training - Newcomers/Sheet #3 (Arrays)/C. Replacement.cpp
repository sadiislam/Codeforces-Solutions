#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    while(n--){
        cin >> a;
        if(a==0) cout << "0 ";
        else if(a>0) cout << "1 ";
        else if(a<0) cout << "2 ";
    }
    cout << endl;
}
