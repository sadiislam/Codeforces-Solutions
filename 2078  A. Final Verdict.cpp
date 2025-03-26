#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[100];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(n==1){
            cout << (a[0] == x ? "YES" : "NO") << endl;
            continue;
        }
        bool p = true;
        while(n>1){
            int k=0;
            for(int i=1; i<n; i++){
                if(n%i == 0){
                    k=i;
                    break;
                }
            }
            if(k==0){
                cout << "NO" << endl;
                p = false;
                break;
            }
            int sub = n/k;
            int sum[100];
            for(int i=0; i<k; i++){
                sum[i] = 0;
                for (int j=0; j<sub; j++){
                    sum[i] += a[i*sub+j];
                }
            }
            n=k;
            for(int i=0; i<n; i++){
                if(sum[i]%sub != 0){
                    p = false;
                    cout << "NO" << endl;
                    goto next;
                }
                a[i] = sum[i]/sub;
            }
        }
        if(p && n==1){
            cout << (a[0] == x ? "YES" : "NO") << endl;
        }
        next:;
    }
}
