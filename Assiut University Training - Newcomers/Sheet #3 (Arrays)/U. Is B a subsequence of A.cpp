#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++) cin >> a[i];  //input arrays
    for(int i=0; i<m; i++) cin >> b[i];
    int ind = 0;  //initializing B index
    for(int i=0; i<n && ind<m; i++){  //iterating A, check match with B
        if(a[i]==b[ind]) ind++;  //if match, move index
    }
    if(ind==m) cout << "YES\n";  //if matched all B in A
    else cout << "NO\n";
}
