#include<bits/stdc++.h>
using namespace std;

void s(int a[][500], int n, int x, int y){
    for(int i=0; i<n; i++){
        swap(a[x-1][i], a[y-1][i]);
    }
    for(int i=0; i<n; i++){
        swap(a[i][x-1], a[i][y-1]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
}

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int a[500][500];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin >> a[i][j];
    }
    s(a, n, x, y);
}
