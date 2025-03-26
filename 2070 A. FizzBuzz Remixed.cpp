#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long c=(n/15)*3, r=n%15, e=0;
        if(r>=0) e++;
        if(r>=1) e++;
        if(r>=2) e++;
        cout << c+e << "\n";
    }
}
