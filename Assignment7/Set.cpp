#include "iostream"
#include <vector>
using namespace std;

class Set {
private:
    vector<int> numbers;
public:
    const vector<int> &getNumbers() const;

    Set();
    Set(vector<int> numbers);
    Set operator*(const Set &other);
    Set operator+(int number);
    Set &operator=(const Set &other);
};

ostream &operator<<(ostream &out, const Set &set);

Set Set::operator*(const Set &other) {
    Set set = *this;

    for (int number : other.numbers) {
        bool add = true;
        for(int y : set.numbers){
            if(number == y)
                add = false;
        }
        if(add)
            set.numbers.emplace_back(number);
    }
    return set;
}

Set::Set(vector<int> numbers) {
    this->numbers = numbers;
}

const vector<int> &Set::getNumbers() const {
    return numbers;
}

Set Set::operator+(int number) {
    Set set = *this;
    bool add = true;
    for (int member : set.numbers) {
        if(member == number)
            add = false;
    }
    if(add)
        set.numbers.emplace_back(number);
    return set;
}

Set &Set::operator=(const Set &other) {
    numbers = other.numbers;
    return *this;
}

ostream &operator<<(ostream &out, const Set &set){
    string string = "";
    for(int number : set.getNumbers()){
        string += (to_string(number) + " ");
    }
    out << string;
    return out;
}

int main(){
    cout << "Union: " << endl;
    Set set = Set({1,2,3,4});
    cout << set << endl;
    Set set2 = Set({3,4,5});
    Set set3 = set * set2;
    cout << set3 << endl;
    cout << endl;

    cout << "Add: " << endl;
    Set setAddFail = set + 1;
    cout << setAddFail << endl;
    Set setAddSuccess = set + 10;
    cout << setAddSuccess << endl;
    cout << endl;

    cout << "Equals: " << endl;
    Set equals1 = Set({1,2,3});
    Set equals2 = Set({4,5,6});
    cout << equals1 << endl;
    cout << equals2 << endl;
    equals1 = equals2;
    cout << equals1 << endl;
    cout << equals2 << endl;
    cout << endl;

    return 0;
}