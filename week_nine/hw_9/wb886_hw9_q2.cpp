#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstSentence;
    string secondSentence;

    cout << "Are these strings anagrams?" << endl;
    cout << "Enter first string: ";
    getline(cin, firstSentence);
    cout << "Enter second string: ";
    getline(cin, secondSentence);

    return 0;
}

