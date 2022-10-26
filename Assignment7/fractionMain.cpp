#include <iostream>
#include "Fraction.cpp"

using namespace std;

int main(){
    // 1 a
    Fraction fraction1a = Fraction(1,2);
    Fraction fraction2a = Fraction(1,2);
    fraction1a = fraction1a - 7;
    fraction2a = 7 - fraction2a;

    cout << fraction1a.numerator << "/" << fraction1a.denominator << endl;
    cout << fraction2a.numerator << "/" << fraction2a.denominator << endl;
    
    // 1 b
    Fraction fraction1b = Fraction(1, 2);
    Fraction fraction2b = Fraction(2,1);
    Fraction a = 5 - 3 - fraction1b; // ((5 - 3) - 1/2) = 3/2
    Fraction b = a - 7; // 3/2 - 7 = -11/2
    Fraction c = 5 - 3 - fraction1b - 7; // 5 - 3 - 1/2 - 7 = -11/2
    Fraction d = c - fraction2b; // 5 - 3 - 1/2 - 7 - 2/1 = -15/2

    cout << a.numerator << "/" << a.denominator << endl;
    cout << b.numerator << "/" << b.denominator << endl;
    cout << c.numerator << "/" << c.denominator << endl;
    cout << d.numerator << "/" << d.denominator << endl;
    return 0;
}