#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    for(i=1; i<=n; i++){  //each row
        for(j=1; j<=n; j++){  //each column
            if(i==n/2+1 && j==n/2+1){
                cout << "X";  //X at center
            }
            else if(i==j){
                cout << "\\";  // \ on main diagonal
            }
            else if(j==n-i+1){
                cout << "/";  // / on anti-diagonal
            }
            else{
                cout << "*";  //* for other
            }
        }
        cout << endl;
    }
}
