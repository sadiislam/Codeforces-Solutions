#include<iostream>
using namespace std;
int main(){
    int t, k;
    cin >> t;
    while(t--){
        cin >> k;
        if(k%3 == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
