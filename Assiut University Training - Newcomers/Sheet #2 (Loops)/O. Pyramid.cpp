#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for(i=1; i<=n; i++)   //row
    {
        for(j=1; j<=i; j++)   //column
        {
            cout << "*";
        }
        cout << endl;
    }
}