#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, j, m, k;
    cin >> n;
    for(i=1; i<=n; i++) {  //for each row
        for(j=i; j<n; j++) {  //for spaces
            cout << " ";
        }
        for(k=0; k<i*2-1; k++){  //for stars
            cout << "*";
        }
        cout << endl;
    }
}
