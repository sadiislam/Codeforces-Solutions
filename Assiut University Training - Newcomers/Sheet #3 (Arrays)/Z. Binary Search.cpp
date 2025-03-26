#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q, i, l, r, m, f = 0;
    cin >> n >> q;
    int a[n+5];
    for(i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);  //ascending sort as BS rules
    while(q--){
        int x; cin >> x;
        l = 0; r = n-1; //set left right boundaries
        f = 0;  //tracking if found
        while(l <= r){
           m = (l+r)/2;  //find middle index
           if(x==a[m]){  //if found
             f=1; break;  //set found & exit loop
           }
           else if(x<a[m]) r=m-1;  //if smaller than middle, move right to left
           else l=m+1;  //if larger than middle, move left to right
        }
        if(f==1) cout << "found\n";
        else cout << "not found\n";
    }
}
