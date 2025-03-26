#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
         cin >> m[i][j];  //input matrix elements
        }
    }
    int msum=0, ssum=0;
    for(int i=0; i<n; i++){
        msum += m[i][i];  //sum main diagonal
        ssum += m[i][n-1-i];  //sum secondary didagonal
    }
    cout << abs(msum-ssum) << endl;  //printing absolute diff
}
