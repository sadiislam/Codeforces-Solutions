#include<bits/stdc++.h>
using namespace std;
bool willMeet(int n, int a, int b, const string& s){
    int x = 0, y = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'N') ++y;
        else if (s[i] == 'E') ++x;
        else if (s[i] == 'S') --y;
        else if (s[i] == 'W') --x;
    }
    int dx = x, dy = y;
    x = 0, y = 0;
    for (int i = 0; i < 1000; ++i){  //Repeating pattern 1000 times
        for (int j = 0; j < n; ++j){
            if (s[j] == 'N') ++y;
            else if (s[j] == 'E') ++x;
            else if (s[j] == 'S') --y;
            else if (s[j] == 'W') --x;
            if (x == a && y == b) return true;
        }
        if (dx == 0 && dy == 0) break;  //if the pattern doesn't change position, stop
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        if (willMeet(n, a, b, s)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
