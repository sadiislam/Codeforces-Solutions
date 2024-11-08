#include<bits/stdc++.h>
using namespace std;
int main(){
     int n, i, max=0, a;
     cin >> n;
     for(i=0; i<n; i++){
        cin >> a;
        if(max<a) max=a;
     }
     cout << max << endl;
}

