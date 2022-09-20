#include <iostream>
using namespace std;

int main() {
    int i = 3;
    int j = 5;
    int *p = &i; // peker til samme minne adresse som i
    int *q = &j; // peker til samme minne adresse som j

    cout << "&i: " << &i << endl;
    cout << "p: " << p << endl;

    cout << "&j: " << &j << endl;
    cout << "q: " << q << endl;


    *p = 7; // i = 7
    *q += 4; // j = 9
    *q = *p + 1; // j = 8
    p = q; // p peker til j 
    cout << *p << " " << *q << endl;
    cout << i << " " << j << endl;

    cout << "&j: " << &j << endl;
    cout << "p: " << p << endl;
}