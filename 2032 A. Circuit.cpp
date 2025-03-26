#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int onS=0;
        for(int i=0; i<2*n; i++){
            int ss;
            cin >> ss;
            onS += ss;
        }
        int minO= onS%2;
        int maxO= min(onS, 2*n-onS);
        cout << minO << " " << maxO << endl;
    }
}
