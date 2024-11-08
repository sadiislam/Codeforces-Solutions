#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int space = n - 1;
    for(i=1; i<=n; i++)   // Top half of the diamond
    {
        for(j=1; j<=space; j++)
        {
            cout << " ";
        }
        for (j=1; j<=2*i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
        space--;
    }
    space = 0;
    for(i=n; i>=1; i--)    // Bottom half of the diamond
    {
        for(j=1; j<=space; j++)
        {
            cout << " ";
        }
        for (j=1; j<=2*i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
        space++;
    }
}
