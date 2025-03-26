#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c=2;
    cin >> n;
    int a[n], b[n];
        for(int i=0; i<n; i++){  //taking a & b array
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        sort(a,a+n); sort(b,b+n);  //sorting both
        for(int i=0; i<n; i++){
            if(a[i]==b[i]); //same okay
            else{
                cout << "no\n"; return 0; //not same stop
            }
        }
        cout << "yes\n";
}
