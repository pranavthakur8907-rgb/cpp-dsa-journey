#include<iostream>
using namespace std;
int main () {
    int age;
    cout << "Enter your age " << endl;
    cin >> age;
    cout << "===== IF STATEMENT ===== " << endl;
    if (age >= 18) {
        cout << "You are eligible to vote. "  << endl;
    }
    return 0;
}