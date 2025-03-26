#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, sum;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){  //taking array
            cin >> a[i];
        }
        int minS = INT_MAX;  //initialize minimum sum large value
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                sum = a[i] + a[j] + j - i;
                if (sum<minS) minS=sum;
            }
        }
        cout << minS << endl;
    }
}
