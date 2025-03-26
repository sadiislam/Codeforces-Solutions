#include<iostream>
using namespace std;
int main(){
    int n, i, l, p;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++){  //taking array
        cin >> a[i];
    }
    l=a[0];  p=0; //initialize l to first element, p to first index
    for(i=1; i<n; i++){  //checking min
        if(a[i]<l){
            l=a[i]; p=i;
        }
    }
    cout << l << " " << p+1 << endl;
}
