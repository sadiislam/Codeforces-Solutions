#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(s[1] == '+')  //1 cause middle char is fixed
        {
            count++;
        }
        else if(s[1] == '-')
        {
            count--;
        }
    }
    cout << count << endl;
}
