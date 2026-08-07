#include<iostream>
using namespace std;
int main() {
    cout << " ===== SIMPLE CALCULATOR ===== " << endl;

    int num1,num2;
    char op;
   
    cout << " Enter first number " << endl;
    cin >> num1;

    cout << " Enter operator (+,-,*,/):" << endl;
    cin >> op;

    cout << " Enter second number " << endl;
    cin >> num2;

    if (op == '+') {
        cout << " Result: " << num1 + num2 << endl;
    }

    else if (op == '-') {
        cout << " Result: " << num1 - num2 << endl;
     }

     else if (op == '*') {
        cout << " Result: " << num1 * num2 << endl;
     }

     else if (op == '/') {
      if (num2 != 0) {
        cout << " Result: " << num1 / num2 << endl;
      }

      else {
        cout << " Division by zero is not allowed. " << endl;
      }
    }
     
      else {
        cout << " Invalid operator " << endl;
      }
      return 0;
    }

