#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    cout << "2 ";  //2 is first prime numb
    for (i=3; i<=n; i++) {  //Checking numb from 3 to n
        bool isPrime = true;  //assuming the number is prime
        for (j=2; j<=sqrt(i); j++) {  //Prime Check //Check up to sqrt(i), number's divisors greater than sqrt(i) can divided by smaller one, so check only smalls for efficiency
            if (i%j == 0){
                isPrime = false;
                break;  //exit loop as number is divisible
            }
        }
        if(isPrime){  //if isPrime true,print the number i
            cout << i << " ";
        }
    }
    cout << endl;
}
