#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int c=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){  //checking if a[i]+1 exists in array
            if(a[j] == a[i]+1){
                c++; break;  //stop inner to check for next array element
            }
        }
    }
    cout << c << endl;
}
