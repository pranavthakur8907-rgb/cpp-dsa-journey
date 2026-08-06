#include<iostream>
using namespace std;
int main() {
    cout << "===== IF ELSE STATEMENT =====" << endl;
    
    int age;
    cout << " Enter your age " << endl;
    cin >> age;

    if (age >= 18) {
        cout << " You can apply for your driving license " << endl;
    }

    else {
        cout << " You cannot apply for your driving license " << endl;
    }
    return 0;
}