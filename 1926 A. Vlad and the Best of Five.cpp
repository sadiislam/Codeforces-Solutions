#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int countA = 0, countB = 0;
        for(char c : str){
            if(c == 'A') countA++;
            else countB++;

        }
        cout << (countA > countB ? 'A' : 'B') << endl;
    }

}
