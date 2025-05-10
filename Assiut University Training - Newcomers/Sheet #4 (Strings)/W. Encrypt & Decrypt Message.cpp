#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    string s, a="", k="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string o="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    cin >> s;
    for(int i=0; i<s.size(); i++){
        char c=s[i];
        for(int j=0; j<o.size(); j++){
            if(q==1 && c==o[j]){
                a+=k[j]; break;
            }
            else if(q==2 && c==k[j]){
                a+=o[j]; break;
            }
        }
    }
    cout << a << "\n";
}
