#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, min=INT_MAX, count=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)   //taking array & checking minimum
    {
        cin >> a[i];
        if(a[i]<min){
            min=a[i];
        }
    }
    for(int i=0; i<n; i++)   //checking count
    {
        if(a[i]==min){
            count++;
        }
    }
    if(count%2==0) cout << "Unlucky" << endl;
    else cout << "Lucky" << endl;
}
