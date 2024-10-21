#include<iostream>
using namespace std;
int main ()
{
    int n, p, v, t, count=0;
    cin >> n;
    while(n--)
    {
        cin >> p >> v >> t;
        if (p==0 && v==0 || p==0  && t==0 || v==0  && t==0){
            continue;
        }
        else{
            count++;
        }
    }
    cout << count << endl;
}
