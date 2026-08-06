#include<iostream>
using namespace std;
int main () {

    cout << "===== ELSE IF LADDER =====" << endl;
    int num1, num2, num3;
    cout << " Enter three numbers:";
   cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3  ) {
        cout << " num1 is largest number. " << endl;
    }

    else if (num2 > num1 && num2 > num3) {
        cout << " num2 is largest number. " << endl;
    }

    else {
        cout << " num3 is largest number. " << endl;
    }
    return 0;

}