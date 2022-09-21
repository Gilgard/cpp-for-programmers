#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Skriv inn 3 ord:" << endl;
    string word1;
    string word2;
    string word3;

    cin >> word1;
    cin >> word2;
    cin >> word3;

    string sentence = word1 + word2 + word3;

    cout << "Lengden til ord 1: " << word1.length() << endl;
    cout << "Lengden til ord 2: " << word2.length() << endl;
    cout << "Lengden til ord 3: " << word3.length() << endl;

    cout << "Lengden til stetningen: " << sentence.length() << endl;

    string sentence2 = sentence;
    
    if(sentence.length() > 12) {
        sentence2.replace(9, 3, "xxx"); 
    }
    
    cout << sentence << endl;
    cout << sentence2 << endl;

    string sentence_start = "";

    if(sentence.length() > 5) {
        sentence_start = sentence.substr(0,5);
    }

    cout << sentence << endl;
    cout << sentence_start << endl;

    if (sentence.find("hello") != string::npos) {
        cout << "Settningen inneholder 'hello'." << endl;
    }

    int count = 0;
    size_t pos = sentence.find("er", 0);
    while(pos != string::npos)
    {
        count++;
        pos = sentence.find("er",pos+2);
    }

    cout << "Settningen har " << count << " forekoster av 'er'." << endl;
}