#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool v[6] = {false};
    v[a] = true; v[b] = true; v[c] = true; v[d] = true;

    for(int i=1; i<=5; i++){
        if(!v[i]){
            cout << i << endl;
            break;
        }
    }
}
