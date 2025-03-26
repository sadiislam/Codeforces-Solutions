#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, count=0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a<=10) cout << "A[" << count << "] = " << a << endl;
        count++;
    }
}
