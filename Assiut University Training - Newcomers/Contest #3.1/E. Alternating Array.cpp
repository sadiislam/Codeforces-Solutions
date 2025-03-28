#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, p=0, q=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];  //taking array
    for(int i=0; i<n; i++){
        if(i%2==0){  //even index position
            if(a[i]<0) p++;  //if negative, need positive for "+ - + - ..."
            if(a[i]>0) q++;  //if positive, need negative for "- + - + ..."
        }
        else{  //odd index position
            if(a[i]>0) p++;  //if positive, need negative for "+ - + - ..."
            if(a[i]<0) q++;  //if negative, need positive for "- + - + ..."
        }
    }
    cout << min(p,q) << endl;  //print min ops
}
