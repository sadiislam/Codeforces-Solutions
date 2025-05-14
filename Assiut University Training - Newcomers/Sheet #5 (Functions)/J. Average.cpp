#include<bits/stdc++.h>
using namespace std;

void avg(double a[], int n){
    double sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    cout << fixed << setprecision(7) << sum/n << "\n";
}

int main(){
    int n;
    cin >> n;
    double a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    avg(a,n);
}
