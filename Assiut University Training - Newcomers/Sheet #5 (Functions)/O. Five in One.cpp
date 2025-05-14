#include<bits/stdc++.h>
using namespace std;

int mx(int n, int a[]){
    int m=INT_MIN;
    for(int i=0; i<n; i++) if(a[i]>m) m=a[i];
    return m;
}

int mn(int n, int a[]){
    int m=INT_MAX;
    for(int i=0; i<n; i++) if(a[i]<m) m=a[i];
    return m;
}

int pc(int n, int a[]){
    int c=0;
    for(int i=0; i<n; i++){
        int x=a[i];
        if(x>1){
            bool f=1;
            for(int j=2; j*j<=x; j++){
                if(x%j==0){
                    f=0; break;
                }
            }
            if(f) c++;
        }
    }
    return c;
}

int plc(int n, int a[]){
    int c=0;
    for(int i=0; i<n; i++){
        int x=a[i], y=x, r=0;
        while(x) r=r*10+x%10, x/=10;
        if(y==r) c++;
    }
    return c;
}

int md(int n, int a[]){
    int m=0, r=0;
    for(int i=0; i<n; i++){
        int c=0;
        for(int j=1; j<=a[i]; j++) if(a[i]%j==0) c++;
        if(c>m || (c==m && a[i]>r)) m=c, r=a[i];
    }
    return r;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << "The maximum number : " << mx(n, a) << "\n";
    cout << "The minimum number : " << mn(n, a) << "\n";
    cout << "The number of prime numbers : " << pc(n, a) << "\n";
    cout << "The number of palindrome numbers : " << plc(n, a) << "\n";
    cout << "The number that has the maximum number of divisors : " << md(n, a) << "\n";
}
