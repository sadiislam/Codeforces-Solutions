#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++){  //taking array
        cin >> a[i];
    }
    for(i=n-1; i>=0; i--){  //printing reversed array
        cout << a[i] << " ";
    }
    cout << endl;
}
