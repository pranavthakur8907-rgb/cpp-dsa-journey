#include<iostream>
using namespace std;
int main () {
    cout << " ===== ELSE IF STATEMENT ===== " << endl;

    int number;
    cout << " Enter your number " << endl;
    cin >> number;

    if (number > 0) {
    cout << " Is a positive number. " << endl;
    }

    else if (number < 0) {
        cout << " Is a negative number. " << endl;
    }

    else {
        cout << " Ia a zero ." << endl;
    }
    return 0;
}
  