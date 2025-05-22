#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        long long v=1;
        for(int j=0; j<=i; j++){
            cout << v << " ";
            v=v*(i-j)/(j+1);
        }
        cout << "\n";
    }
}
