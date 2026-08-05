#include<iostream>
using namespace std;
int main () {
    cout << " ===== IF ELSE STATEMENT ===== " << endl;
    int marks;
    cout << " Enter your marks " << endl;
    cin >> marks;

    if (marks >=40) {
        cout << " You are pass " << endl;
    }
    else {
        cout << " You are fail " << endl;
    }
    return 0;
}