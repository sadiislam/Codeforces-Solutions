#include<bits/stdc++.h>
using namespace std;

int sumofdigit(int n){  //func
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n, a, b, i, digitsum, totalsum=0;
    cin >> n >> a >> b;
    for(i=1; i<=n; i++){
        digitsum = sumofdigit(i);
        if(digitsum >= a && digitsum <= b){
            totalsum += i;
        }
    }
    cout << totalsum << endl;
}
