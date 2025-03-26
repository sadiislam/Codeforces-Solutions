#include<iostream>
using namespace std;
int main(){
    int n, ppl=0, val;
    char type;
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> type >> val;
        if(type == 'P'){
            ppl += val;
        }
        else if(type == 'B'){
            if (ppl<val){
                cout << "YES" << endl;
                ppl = 0;  //everyone includ Monocarp take the bus
            }
            else {
                cout << "NO" << endl;
                ppl -= val;  //some people can take the bus
            }
        }
    }
}
