#include<iostream>
using namespace std;
int main() {
    int a = 15;
    int b = 4;
    // Arithmetic Operators 

    cout << "===== Arithmetic operators =====" << endl;
    cout << "Addition:" << a+b << endl;
    cout << "Subtraction:" << a-b << endl;
    cout << "Multiplication:" << a*b << endl;
    cout << "Division:" << a/b << endl;
    cout << "Modulus:" << a%b << endl;

    cout << endl;

    // Relational Operators

    cout << "===== Relational operators =====" << endl;
    cout << "a==b:" << (a==b) << endl;
    cout << "a!=b:" << (a!=b) << endl;
    cout << "a<b:" << (a<b) << endl;
    cout << "a>b:" << (a>b) << endl;
    cout << "a<=b:" << (a<=b) << endl;
    cout << "a>=b:" << (a>=b) << endl;

    cout << endl;

    // logical Operators

    cout << "===== Logical Operators =====" << endl;
    cout << "(a > b && a > 20):" << ((a > b && a > 20)) << endl;
    cout << "(a < b || a < 10):" << ((a < b || a < 10)) << endl;
    cout << "!(a < b):" << !(a < b) << endl;

    cout << endl;

    // Assignment Operators

    cout << "===== Assignment Operators =====" << endl;
    int x = 10;
    
    x +=5;
    cout << "After x +=5:" << x << endl;

    x -=4;
    cout << "After x -=4:" << x << endl;

    x *=3;
    cout << "After x *=3:" << x << endl;

    x /= 2;
    cout << "After x /=2:" << x << endl;

    cout << endl;

    // Increment & Decrement Operators

    cout << "===== Increment & Decrement Operators =====" << endl;
    int y =10;

    cout << "Initial Value:" << y << endl;
    cout << "Post Increment:" << y++ << endl;
    cout << "After Post Increment:" << y << endl;

    cout << "Initial Value:" << y << endl;
    cout << "Pre Increment:" << ++y << endl;
    cout << "After Pre Increment:" << y << endl;

    cout << "Initial Value:" << y << endl;
    cout << "Post Decrement:" << y-- << endl;
    cout << "After Post Decrement:" << y << endl;

    cout << "Initial Value:" << y << endl;
    cout << "Pre Decrement:" << --y << endl;
    cout << "After Pre Decrement:" << y << endl;
    
    return 0;
}
