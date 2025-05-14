#include<bits/stdc++.h>
using namespace std;

void mm(int a[], int n){
    int min=a[0], max=a[0];
    for(int i=1; i<n; i++){
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }
    cout << min << " " << max << "\n";
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    mm(a,n);
}


