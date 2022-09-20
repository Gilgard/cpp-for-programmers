#include <iostream>
using namespace std;

int main() {
    const int length = 5;
    int smaller = 0;
    int between = 0;
    int greater = 0;
    cout << "Du skal skrive inn 5 temperaturer." << endl;

    for (int j = 0; j < length; j++) {
        cout << "Temperatur nr " << j + 1 << ":";
        double temp;
        cin >> temp;
        if (temp < 10) ++smaller;
        else if (temp > 20) ++greater;
        else ++between;
    }

    cout << "Antall under 10 er " << smaller << endl;
    cout << "Antall mellom 10 og 20 er " << between << endl;
    cout << "Antall over 20 er " << greater << endl;
}