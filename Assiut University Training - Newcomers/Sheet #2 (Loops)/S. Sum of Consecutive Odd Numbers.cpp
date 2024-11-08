#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, x, y, ma, mi, sum=0, i;
    cin >> t;
    while(t--){
        cin >> x >> y;
        mi = min(x,y);  //catching min max numb
        ma = max(x,y);
        for(i=mi+1; i<ma; i++){  //looping minimum to maximun numb
            if(i%2!=0){  //checking odd numb
                sum+=i;  //adding all odd between
            }
        }
        cout << sum << endl;
        sum=0;
    }
}
