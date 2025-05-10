#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a[128]={};  //array to store frequency of char
    cin >> n;
    for(int i=0; i<n; i++){
        char s;
        cin >> s;
        a[s]++;  //increment char frequency
    }
    for(int i=0; i<128; i++){  //iterate through ASCII values
        if(a[i]!=0){  //if char exist
            while(a[i]--){  //print the char by its amount
                cout << (char) i;  //convert ASCII to char
                }
        }
    }
    cout << "\n";
}
