#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age " << endl;
    cin >> age;

    if (age >=18) {

        cout << " You are eligible to vote. " << endl;

    if (age >=21) {
        cout << " You can apply for license. " << endl;
    }
    
    else {
        cout << " You cannot apply for licence. " << endl;
    }

}
    else {
        cout << "You are not eligible to vote. " << endl;
    }
    return 0;
}



    