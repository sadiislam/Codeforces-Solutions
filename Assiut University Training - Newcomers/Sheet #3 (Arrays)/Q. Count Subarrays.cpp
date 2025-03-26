#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int count = 0;
        for(int i=0; i<n; i++){
            count++;  //or add n with count in cout
            for(int j=i+1; j<n; j++){
                if(a[j]>=a[j-1]) count++;
                else break;
            }
        }
        cout << count << "\n";
    }
}
