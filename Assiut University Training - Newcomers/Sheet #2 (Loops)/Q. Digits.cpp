#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, d, i;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        for(i = s.size() - 1; i >= 0; i--) {  //Loop from the last character to the first
            cout << s[i] << " ";  //Printing each character in reverse
        }
        cout << endl;
    }
}
