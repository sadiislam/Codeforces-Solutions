#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while(q--){
        string x;
        cin >> x;
        if(x=="pop_back")  s.pop_back();
        else if(x=="front")  cout << s.front() << "\n";
        else if(x=="back")  cout << s.back() << "\n";
        else if(x=="sort"){
            int l, r;  cin >> l >> r;
            if(l>r) swap(l,r);  //make sure left right
            sort(s.begin()+l-1, s.begin()+r);  //-1 for 0 based index
        }
        else if(x=="reverse"){
            int l, r;  cin >> l >> r;
            if(l>r) swap(l,r);
            reverse(s.begin()+l-1, s.begin()+r);
        }
        else if(x=="print"){
            int pos;  cin >> pos;
            cout << s[pos-1] << "\n";
        }
        else if(x=="substr"){
            int l, r;  cin >> l >> r;
            if(l>r) swap(l,r);
            string a = s.substr(l-1,(r-l)+1);
            cout << a << "\n";
        }
        else{
            char c;  cin >> c;
            s.push_back(c);
        }
    }
}
