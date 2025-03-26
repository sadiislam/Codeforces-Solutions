#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[20];
        int f[21] = {0};
        for(int i=0; i<n; ++i){
            cin >> a[i];
            f[a[i]]++;
        }
        int s=0;
        for(int i=1; i<=20; ++i) {
            s += f[i]/2;
        }
        cout << s << endl;
    }
}
