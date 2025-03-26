#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n], freq[m+1]={};  //initializing empty array
    for(int i=0; i<n; i++){
        cin >> a[i];  //taking array
        int ind = a[i];
        freq[ind]++;  //incrementing digit's index
    }
    for(int i=1; i<m+1; i++){
        cout << freq[i] << endl;  //printing all
    }
}
