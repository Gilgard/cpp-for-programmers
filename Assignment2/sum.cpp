#include <iostream>
using namespace std;

int find_sum(const int *table, int length) {
    int sum = 0;
    for(int i = 0; i < length; i ++) {
        sum += *table;
        table++;
    }

    return sum;
}

int main() {
    int table[20] = {5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};

    const int *table1;
    table1 = table;
    cout << "Sum av 5:" << find_sum(table1, 5) << endl;

    const int *table2;
    table2 = table;
    cout << "Sum av 10:" << find_sum(table2, 10) << endl;
    
    const int *table3;
    table3 = table;
    cout << "Sum av 15:" << find_sum(table3, 15) << endl;
}
