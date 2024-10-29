#include<bits/stdc++.h>
using namespace std;
int main(){
    long long e, m, b, r, count=0;
    cin >> e >> m >> b;

    r = min({e,m,b});  //3rd case - taking single everyone using minimum value
    count += r;

    e-=r; m-=r; b-=r;  //saving reminder wood pieces

    r = min(e/2,b);  //1st & 2nd case, ignored m cause doesnt depend on m
    count += r;

    cout << count << endl;
}

