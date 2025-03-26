#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    long long a[n];
    for(int i=0; i<n; i++) cin >> a[i];  //input array
    for(int i=1; i<n; i++){  //pre sum array, sum from index 0 to i
        a[i]+=a[i-1];  //update each cumulative sum
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        long long sum=0;
        if(l==1) sum=a[r-1];  //if 1, ans l-1 indexed pre value
        else sum=a[r-1]-a[l-2];
        cout << sum << endl;
    }
}
