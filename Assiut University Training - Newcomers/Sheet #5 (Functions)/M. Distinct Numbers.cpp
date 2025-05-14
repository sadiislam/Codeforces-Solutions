#include<bits/stdc++.h>
using namespace std;

void f(int n){
    set<int> s;
    while(n--){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";
}

int main(){
    int n;
    cin >> n;
    f(n);
}

