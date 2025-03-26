#include<iostream>
using namespace std;
int main() {
    int t, n, i;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        n = a.length();
        for(i=0; i<n/2; i++){  //reversing
            char temp=a[i];
            a[i] = a[n-i-1];
            a[n-i-1] = temp;
        }

        for(i=0; i<n; i++){
            if(a[i] == 'p') a[i]='q';
            else if(a[i] == 'q') a[i]='p';
        }
        cout << a << endl;
    }
}
