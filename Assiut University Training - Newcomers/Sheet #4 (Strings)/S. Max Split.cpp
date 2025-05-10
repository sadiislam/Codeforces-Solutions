#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, a[550], subst="";
    cin >> s;
    int l=0, r=0, ind=0;
    for(int i=0; i<s.size(); i++){  //itearate all char
        if(s[i]=='L') l++;  //counting l & r
        else r++;
        subst.push_back(s[i]);  //adding each in substring
        if(l==r){  //when end & equal pattern
            a[ind]=subst;  //saving the substring
            ind++;  //counting how many pattern
            subst.clear(); l=0; r=0;  //clearing to add next pattern
        }
    }
    cout << ind << "\n";
    for(int i=0; i<ind; i++) cout << a[i] << "\n";  //printing each pattern
}
