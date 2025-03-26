#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];  //taking matrix
        }
    }
    for(int i=0; i<n; i++){  //iterating each row
        for(int j=m-1; j>=0; j--){  //row reverse order
            cout << mat[i][j] << " "; //printing elements
        }
        cout << "\n";
    }
}
