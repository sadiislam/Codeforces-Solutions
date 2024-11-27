#include<iostream>  //snake type serial
using namespace std;
int main(){
    long long id;
    cin >> id;
    long long row = id/4;
    long long col;
    if(row%2 == 0){  //even rows are as usual
        col = id%4;
    }
    else{
        col = 3-(id%4);  //odd row with reversed
    }
    cout << row << " " << col << endl;
}
