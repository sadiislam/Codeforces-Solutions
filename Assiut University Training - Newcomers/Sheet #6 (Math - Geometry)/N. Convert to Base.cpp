#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    if(t==1){
        string n; int x; long long d=0;
        cin >> n >> x;
        for(char c:n) d=d*x+(isdigit(c)? c-'0' : c-'A'+10);
        cout << d << "\n";
    }
    else{
        int n, x; string r="";
        cin >> n >> x;
        while(n){
            int m=n%x;
            r+=(m<10? '0'+m : 'A'+m-10); n/=x;
        }
        reverse(r.begin(),r.end());
        cout << r << "\n";
    }
}
