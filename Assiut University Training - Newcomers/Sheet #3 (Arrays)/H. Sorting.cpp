#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)   //taking input
    {
        cin >> a[i];
    }
    //using selection sort
    for(int i=0; i<n-1; i++)   //digits
    {
        for(int j=i+1; j<n; j++)   //comparing with others
        {
            if(a[i]>a[j]) swap(a[i], a[j]);  //swapping digits
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
