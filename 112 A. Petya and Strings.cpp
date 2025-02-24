#include<iostream>
using namespace std;
int main(){
    char s1[101], s2[101];
    cin >> s1 >> s2;
    for(int i=0; s1[i]!='\0'; i++){  //converting both strings to lowercase
        if (s1[i]>='A' && s1[i]<='Z'){
            s1[i] += 32;
        }
    }
    for(int i=0; s2[i]!='\0'; i++) {
        if (s2[i]>='A' && s2[i]<='Z') {
            s2[i] += 32;
        }
    }

    int r=0;
    for(int i=0; s1[i]!='\0' && s2[i]!='\0'; i++){  //comparing the strings
        if(s1[i] < s2[i]) {
            r = -1;
            break;
        }
        else if(s1[i] > s2[i]) {
            r = 1;
            break;
        }
    }
    cout << r << endl;
}
