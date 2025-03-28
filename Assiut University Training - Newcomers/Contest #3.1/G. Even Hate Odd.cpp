#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], e=0, o=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2==0) e++;  //even odd counter
            else o++;
        }
        if(n%2!=0) cout << "-1\n";  //impossible, if odd array
        else if(e==o) cout << "0\n";  //no ops, if odd even equal
        else if(e!=o){  //if not equal
            int mi = min(e,o);  //choose minority
            cout << (n/2)-mi << endl;  //remove minority from half array
        }
    }
}
