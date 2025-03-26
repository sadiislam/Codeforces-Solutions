#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, w, h, wmax=0, hmax=0;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0; i<n; i++){
            cin >> w >> h;
            if(w>wmax) wmax=w;
            if(h>hmax) hmax=h;
        }
        cout << 2*(wmax+hmax) << endl;
        wmax=0; hmax=0;
    }
}
