#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, check=0;
    cin >> n;
    long long a[n];
    for(i=0; i<n; i++){   //taking array
        cin >> a[i];
    }
    for(i=0; i<=n/2; i++){  //checking if array is a palindrome
        if(a[i] != a[n-1-i]){  //checking if first & last element are equal or not
            check = 1;
            break;
        }
    }
    if(check == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
}
