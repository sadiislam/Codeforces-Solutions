#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, j, t=1;
    cin >> n;
    for(i=0; i<n; i++){  //for each line
        for(j=1; j<4; j++){  //for numb
            cout << t << " ";
            t++;
        }
        cout << "PUM" << endl;  //printing pum & moving to next line
        t++;  //incrementing number to skip one
    }
}
