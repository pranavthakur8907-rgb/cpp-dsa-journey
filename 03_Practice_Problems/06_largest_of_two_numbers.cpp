#include<iostream>
using namespace std;
int main () {
    cout << " ===== IF ELSE STATEMENT ===== " << endl;

    int num1 = 50;
    int num2 = 30;
    cout << " Enter your number " << endl;
    cin >> num1;
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " Is the largest number. " << endl;
    }

    else {
        cout <<  num2 << " Is the largest number. " << endl;
    }
    return 0;
}
  