#include <iostream>
using namespace std;

int main() {
    double number;
    double *pointer = &number;
    double &reference = number;

    number = 3.3; // Method 1 change directly
    cout << "number = " << number << endl;

    *pointer = 10; // Method 2 change the value trough the pointer
    cout << "number = " << number << endl;

    reference = 100; // Method 3 change the value through the reference
    cout << "number = " << number << endl;
}