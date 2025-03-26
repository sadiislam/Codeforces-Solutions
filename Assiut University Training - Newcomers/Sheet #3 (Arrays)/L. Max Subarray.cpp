#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){  //taking array
            cin >> a[i];
        }

        for(int i=0; i<n; i++){  //iterate each element
            cout << a[i] << " ";  //printing element, sub-array size 1
            int m = a[i];  //current assume max
            for(int j=i+1; j<n; j++){  //expanding sub-array from itself
                m = max(m,a[j]);  //updating max
                cout << m << " ";  //Printing max of this sub-array
            }
        }
        cout << endl;
    }
}
