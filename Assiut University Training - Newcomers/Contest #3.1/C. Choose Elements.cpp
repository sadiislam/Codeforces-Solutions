#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    long long a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long s=0;
    for(int i=n-1; i>=n-k; i--){
        if(a[i]<0) break;
            s+=a[i];
    }
    cout << s << endl;
}
