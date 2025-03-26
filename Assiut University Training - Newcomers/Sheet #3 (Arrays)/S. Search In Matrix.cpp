#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int t = n*m;  //total array elements
    int a[t];
    for(int i=0; i<t; i++){  //taking array elements
        cin >> a[i];
    }
    int x; cin >> x;
    for(int i=0; i<t; i++){
        if(a[i]==x){  //if already exist
            cout << "will not take number\n";
            return 0;
        }
    }
    cout << "will take number\n";
}
