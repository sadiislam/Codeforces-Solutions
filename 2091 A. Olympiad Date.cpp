#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int d[20], f[10] = {0};
        for(int i=0; i<n; i++){
            cin >> d[i];
        }
        int r[] = {0, 1, 0, 3, 2, 0, 2, 5};
        for(int i=0; i<n; i++){
            f[d[i]]++;
            int tf[10] = {0}, ok = 1;
            for(int j=0; j<8; j++){
                tf[r[j]]++;
                if(tf[r[j]] > f[r[j]]){
                    ok = 0;
                    break;
                }
            }
            if(ok){
                cout << (i + 1) << "\n";
                goto nxt;
            }
        }
        cout << "0\n";
        nxt:;
    }
}
