#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string d;
    cin >> n >> d;
    int sum=0;
    for(int i=0; i<n; i++){
        sum += d[i] - '0';  //converts character to integer
    }
    cout << sum << endl;
}
