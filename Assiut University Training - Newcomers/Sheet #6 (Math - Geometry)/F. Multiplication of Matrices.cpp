#include<bits/stdc++.h>
using namespace std;
int main(){
    int Ra, Ca; cin >> Ra >> Ca;
    int f[Ra][Ca];
    for(int i=0; i<Ra; i++){
        for(int j=0; j<Ca; j++) cin >> f[i][j];
    }
    int Rb, Cb; cin >> Rb >> Cb;
    int s[Rb][Cb];
    for(int i=0; i<Rb; i++){
        for(int j=0; j<Cb; j++) cin >> s[i][j];
    }

    int r[101][101] = {0};
    for(int i=0; i<Ra; i++){
        for(int j=0; j<Cb; j++){
            for(int k=0; k<Ca; k++) r[i][j] += f[i][k]*s[k][j];
        }
    }

    for(int i=0; i<Ra; i++){
        for(int j=0; j<Cb; j++){
            cout << r[i][j];
            if(j<Cb-1) cout << " ";
        }
        cout << "\n";
    }
}
