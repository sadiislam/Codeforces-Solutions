#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        int c=0;
        while(x>=33){
            if(x%100 == 33) x/=100;
            else x-=33;
        }
        if(x==0) c=1;
        if(c==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
