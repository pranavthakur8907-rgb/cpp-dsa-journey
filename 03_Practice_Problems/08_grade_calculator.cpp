#include<iostream>
using namespace std;
int main () {
    cout << " ===== ELSE IF LADDER ===== " << endl;

    int marks;
    cout << " Enter your marks " << endl;
    cin >> marks;

    if (marks >= 90) {
        cout << " Grade A " << endl;
    }

    else if (marks >= 75) {
        cout << " Grade B " << endl;
     }

    else if (marks >= 40) {
        cout << " Grade C " << endl;
    }

    else {
        cout << "  Fail " << endl;
    }
    return 0;
}

    


