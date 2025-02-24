#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], i, count=0;

    for(i=0; i<n; i++){   //input array
        cin >> a[i];
    }

    for(i=0; i<n; i++){
        if(a[i]>=a[k-1] && a[i]>0){   //checking condition
            count++;
        }
    }
    cout << count << endl;
}
