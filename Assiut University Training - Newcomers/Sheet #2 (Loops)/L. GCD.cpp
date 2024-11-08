#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, i, mi, m;
    cin >> a >> b;
    mi=min(a,b);
    for(i=1; i<=mi; i++){
        if(a%i==0 && b%i==0){
            m=i;
        }
    }
    cout << m << endl;
}
