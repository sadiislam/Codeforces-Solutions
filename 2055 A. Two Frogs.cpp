#include<iostream>
using namespace std;
int main(){
    int t, n, a, b, d;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        d = abs(a - b);
        if(d%2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
