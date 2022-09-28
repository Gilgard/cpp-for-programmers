#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

void read_temperatures(double temperatures[], int length);

int main() {
    double temperatures[5] = {};
    const int length = 5;
    read_temperatures(temperatures, length);
        
    int smaller = 0;
    int between = 0;
    int greater = 0;

    for (int j = 0; j < length; j++) {
        double temp = temperatures[j];
        cout << "Temperatur nr " << j + 1 << ":" << temp << endl;
        if (temp < 10) ++smaller;
        else if (temp > 20) ++greater;
        else ++between;
    }

    cout << "Antall under 10 er " << smaller << endl;
    cout << "Antall mellom 10 og 20 er " << between << endl;
    cout << "Antall over 20 er " << greater << endl;
}

void read_temperatures(double temperatures[], int length) {
        const char filename[] = "temperatures.txt";
        ifstream file;
        file.open(filename);
        if (!file) {
            cout << "Feil ved åpning av innfil." << endl;
            exit(EXIT_FAILURE);
        }

        double number;
        for (int j = 0; j < length; j++) {
            file >> number;
            temperatures[j] = number;
        }

        file.close();
    }