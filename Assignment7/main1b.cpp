#include <iostream>
#include "Fraction.hpp"

using namespace std;

int main(){

    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(2,1);
    Fraction a = 5 - 3 - fraction1; // ((5 - 3) - 1/2) = 3/2
    Fraction b = a - 7; // 3/2 - 7 = -11/2
    Fraction c = 5 - 3 - fraction1 - 7; // 5 - 3 - 1/2 - 7 = -11/2
    Fraction d = c - fraction2; // 5 - 3 - 1/2 - 7 - 2/1 = -15/2

    cout << a.numerator << "/" << a.denominator << endl;
    cout << b.numerator << "/" << b.denominator << endl;
    cout << c.numerator << "/" << c.denominator << endl;
    cout << d.numerator << "/" << d.denominator << endl;

    return 0;
}