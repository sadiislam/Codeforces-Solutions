#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        if(l==r && d==u && l==d && l==u && u==d){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
