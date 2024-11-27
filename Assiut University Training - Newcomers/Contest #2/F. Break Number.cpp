#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count, max=0;
    cin >> n;
    while(n--){
        long long x;
        cin >> x;
        while(x%2==0){
            count++; x/=2;
            }
        if(max<count) max=count;
        count=0;
    }
    cout << max << endl;
}
