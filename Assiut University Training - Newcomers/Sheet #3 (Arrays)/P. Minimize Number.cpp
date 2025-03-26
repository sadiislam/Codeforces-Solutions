#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){  //array input
        cin >> a[i];
    }
    int count = 0;  //count initialize zero
    while(true){
        for(int i=0; i<n; i++){  //stopping if anyone odd
            if(a[i]%2 != 0){
                cout << count << endl;
                return 0;
            }
        }
        for(int i=0; i<n; i++){  //as no odd found, divide all
                a[i] = a[i]/2;
        }
        count++;  //divided counter
    }
    cout << count << endl;
}
