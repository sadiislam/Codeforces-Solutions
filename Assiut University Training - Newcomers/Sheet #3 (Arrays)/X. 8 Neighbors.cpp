#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    char mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m ;j++){
            cin >> mat[i][j];  //taking matrix
        }
    }
    int x, y;  cin >> x >> y;  //taking position
    x--; y--;  //adjusts to index(0 based)
    if(mat[x-1][y-1] != '.' && mat[x-1][y] != '.' &&  //checking if sides are . or not
       mat[x-1][y+1] != '.' && mat[x][y-1] != '.' &&
       mat[x][y+1] != '.' && mat[x+1][y-1] != '.' &&
       mat[x+1][y] != '.' && mat[x+1][y+1] != '.')  cout << "yes\n";
    else cout << "no\n";
}
