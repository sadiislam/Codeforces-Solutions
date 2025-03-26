#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, i, x;
    cin >> t;
    int a[t], found=0;
    for(i=0; i<t; i++){  //taking array
        cin >> a[i];
    }
    cin >> x;
    for(i=0; i<t; i++){  //checking array
        if(a[i]==x){
            cout << i << endl;
             found = 1;
             break;
        }
    }
    if(found==0) cout << "-1" << endl;
}
