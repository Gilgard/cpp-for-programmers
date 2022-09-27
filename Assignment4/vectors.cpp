#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void find_out(vector<double> vec, double search) {
    auto it = std::find(vec.begin(), vec.end(), search);
    if(it != vec.end()) {
        cout << search << " found at " << it - vec.begin() << endl;
    }else {
        cout << search << " not found in vector";
    }
}

int main() {
    vector<double> dub = { 7, 5, 16, 8, 1 };
    cout << dub.front() << endl;
    cout << dub.back() << endl;

    dub.emplace(dub.begin(), 2);
    cout << dub.front() << endl;

    double search = 7;
    find_out(dub, search);
    
    search = 9;
    find_out(dub, search);
}