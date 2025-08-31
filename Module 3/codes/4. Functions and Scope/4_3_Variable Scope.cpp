#include <iostream>
using namespace std;

int globalVar = 100;

void showScope() {
    int localVar = 50;
    cout << "Inside showScope():" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;
    cout << "-----------------------------" << endl;
}

int main() {
    int localVar = 20;

    cout << "Inside main():" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable (in main): " << localVar << endl;
    cout << "-----------------------------" << endl;

    showScope();

    return 0;
}

