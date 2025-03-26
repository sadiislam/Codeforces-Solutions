#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, max = INT_MIN, min = INT_MAX, maxI, minI;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){  //taking array
        cin >> a[i];
    }
    for(int i=0; i<n; i++){  //finding max min index
        if(a[i]>max){
            max = a[i]; maxI = i;
        }
        if(a[i]<min){
            min = a[i]; minI = i;
        }
    }
    swap(a[maxI],a[minI]);  //swapping array values
    for(int i=0; i<n; i++){  //printing
        cout << a[i] << " ";
    }
    cout << endl;
}
