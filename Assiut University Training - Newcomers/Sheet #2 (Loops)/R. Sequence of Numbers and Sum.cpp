#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, s, l, sum, i;
    while(true){
        cin >> n >> m;
        if (n <= 0 || m <= 0){  //Terminating
            break;
        }
        s = min(n, m);  //Finding smaller numb
        l = max(n, m);  //Finding larger numb
        sum = 0;  //Initialize sum to 0
        for (i = s; i <= l; i++){  //Loop smaller to larger numb
            sum += i;  //Adding current number to sum
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }
}
