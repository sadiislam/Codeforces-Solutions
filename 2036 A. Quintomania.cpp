#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, cnt;
    cin >> t;
    while(t--){
        cin >> n;
        int notes[n];
        for(i = 0; i < n; i++){
            cin >> notes[i];
        }
        cnt = 1;  //Assuming melody is perfect
        for(i = 1; i < n; i++) {  //Starting from second note
            int interval = abs(notes[i] - notes[i-1]);
            if(interval != 5 && interval != 7) {
                cnt = 0;  //Melody not perfect
                break;
            }
        }
        if(cnt == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
