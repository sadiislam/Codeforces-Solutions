#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin >> x;
    if(x>='0' && x<='9'){
        cout << "IS DIGIT" << endl;
    }
    else if(x>='a' && x<='z'){
        cout << "ALPHA" << "\n" << "IS SMALL" << endl;
    }
    else{
        cout << "ALPHA" << "\n" << "IS CAPITAL" << endl;
    }
}


