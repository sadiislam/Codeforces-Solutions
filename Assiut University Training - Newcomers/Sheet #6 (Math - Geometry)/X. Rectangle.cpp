#include<bits/stdc++.h>
using namespace std;
int main(){
    int x[4], y[4];
    for(int i=0; i<4; i++) cin >> x[i] >> y[i];
    int minx=*min_element(x,x+4), maxx=*max_element(x,x+4);
    int miny=*min_element(y,y+4), maxy=*max_element(y,y+4);
    int n;
    cin >> n;
    while(n--){
        int xi, yi;
        cin >> xi >> yi;
        if(xi>=minx && xi<=maxx && yi>=miny && yi<=maxy) cout << "YES\n";
        else cout << "NO\n";
    }
}
