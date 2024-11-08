#include<iostream>
using namespace std;
int main(){
    int k, s, count=0;
    cin >> k >> s;
    for (int i=0; i<=k; i++) {  //two loop for two numb
        for (int j=0; j<=k; j++) {
            int d = s-i-j;  //find third numb
            if(d>=0 && d<=k) {  //if d in range, then meets eqn "sum=i+j+d"
                count++;
            }
        }
    }
    cout << count << endl;
}
