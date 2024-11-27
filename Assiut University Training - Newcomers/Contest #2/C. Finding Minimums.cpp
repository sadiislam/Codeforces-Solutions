#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){  //Input array
        cin >> a[i];
    }
    for(int i=0; i<n; i+=k){   //Iterate over the array in steps of k
        int min = INT_MAX;   //Initializing min to the max integer value(2,147,483,647)
        for(int j=i; j<i+k && j<n; j++){  //Iterate over each group of size k
            if(a[j]<min) min = a[j];  //Updating min_val if smaller found
        }
        cout << min << " ";
    }
    cout << endl;
    return 0;
}
