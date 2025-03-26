#include<iostream>
using namespace std;
int main(){
    int t, i, j;
    cin >> t;
    for(i=0; i<t; i++){
        string w;
        cin >> w;
        int len = w.length();
        for(j=0; j<len-2; j++) {
            cout << w[j];
        }
        cout << "i" << endl;
    }
}
