#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, i, check = 1, flag, temp, d;
    cin >> a >> b;

    for (i = a; i <= b; i++) {  //Loop from a to b
        flag = 1;  //Assuming the number is lucky
        temp = i;  //Storing the current number in temp

        while (temp > 0) {  //Checking each digit of the number
            d = temp % 10;  //Getting the last digit
            if (d != 4 && d != 7) {
                flag = 0;  //Marking the number as not lucky
                break;  //Exit the loop
            }
            temp /= 10;  //Removing last digit
        }

        if (flag == 1) {  //If flag remains 1, its lucky
            cout << i << " ";
            check = 0;  //changing check value if found lucky
        }
    }

    if (check == 0) cout << endl;  //adding last newline
    if (check == 1) cout << "-1" << endl;  //-1 if no lucky found
}
