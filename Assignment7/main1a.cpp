#include <iostream>
#include "Fraction.hpp"

using namespace std;

int main(){
    Fraction fraction1 = Fraction(1,2);
    Fraction fraction2 = Fraction(1,2);
    fraction1 = fraction1 - 7;
    fraction2 = 7 - fraction2;

    cout << fraction1.numerator << "/" << fraction1.denominator << endl;
    cout << fraction2.numerator << "/" << fraction2.denominator << endl;
    return 0;
}