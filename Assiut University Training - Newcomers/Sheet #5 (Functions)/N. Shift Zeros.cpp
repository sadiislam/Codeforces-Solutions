#include<bits/stdc++.h>
using namespace std;

void f(vector<int> v, int n){
    vector<int> r;
    int z=0;
    for(int i=0; i<n; i++){
        if(v[i]!=0) r.push_back(v[i]);
        else z++;
    }
    for(int i=0; i<r.size(); i++) cout << r[i] << " ";
    for(int i=0; i<z; i++) cout << 0 << " ";
    cout << "\n";
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    f(v,n);
}
