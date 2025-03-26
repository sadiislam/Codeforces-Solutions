#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, a, b, c, total, day, cycle, cycles, rem;
        cin >> n >> a >> b >> c;
        cycle = a+b+c;
        cycles = n/cycle;
        rem = n%cycle;
        day = cycles*3;
        if(rem > 0){
            if(rem <= a){
                day += 1;
            }
            else if(rem <= a+b){
                day += 2;
            }
            else{
                day += 3;
            }
        }
        cout << day << endl;
    }
}
