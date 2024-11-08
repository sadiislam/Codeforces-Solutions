#include<bits/stdc++.h>
using namespace std;

long long factorial(int n){  // long long to avoid storage exceeding
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}

int main(){
    int t, n, i;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n;
        cout << factorial(n) << endl;
    }
}

/* //without function

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, fact;
    cin >> t;
    while(t--){
        cin >> n;
        fact = 1;  //Reseting fact to 1 for each test case
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        cout << fact << endl;
    }
}
*/
