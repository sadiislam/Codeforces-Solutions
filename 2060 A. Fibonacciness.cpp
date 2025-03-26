#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int maxF = 0;
        for(a3=-100; a3<=100; ++a3){
            int fibC = 0;
            if(a3 == a1+a2) ++fibC;
            if(a4 == a2+a3) ++fibC;
            if(a5 == a3+a4) ++fibC;
            if(fibC > maxF) maxF=fibC;
        }
        cout << maxF << endl;
    }
}
