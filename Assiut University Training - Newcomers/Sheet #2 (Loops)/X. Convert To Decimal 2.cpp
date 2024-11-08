#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, c=0, sum=0;
        cin >> n;
        while(n>0){  //Counting the number of 1's in the binary representation of n
            if(n%2==1) c++;  //Increment if the last bit is 1
            n /= 2;  //Move to next bit
        }
        sum = pow(2,c)-1;  //Calculate sum as 2^c-1
        cout << sum << endl;
    }
}
