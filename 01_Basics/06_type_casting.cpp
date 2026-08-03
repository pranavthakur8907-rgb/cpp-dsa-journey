#include <iostream>
using namespace std;

int main() {

    // Implicit Type Casting (Automatic)
    int num = 10;
    double value = num;

    cout << "Implicit Type Casting" << endl;
    cout << "Integer Value: " << num << endl;
    cout << "Converted to Double: " << value << endl;

    cout << endl;

    // Explicit Type Casting (Manual)
    double pi = 3.14159;
    int result = (int)pi;

    cout << "Explicit Type Casting" << endl;
    cout << "Original Double Value: " << pi << endl;
    cout << "Converted to Integer: " << result << endl;

    return 0;
}