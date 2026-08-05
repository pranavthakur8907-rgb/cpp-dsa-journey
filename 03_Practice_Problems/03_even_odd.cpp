#include<iostream>
using namespace std;
int main () {
    cout << " ===== IF ELSE STATEMENT ===== " << endl;

    int number;


    cout << " Enter your number " << endl;
    cin >> number;

    
    if ( number % 2 == 0 ) {
        cout << " is an even number " << endl;
    }
    else {
        cout << " is an odd number " << endl;
    }
    return 0;
}
