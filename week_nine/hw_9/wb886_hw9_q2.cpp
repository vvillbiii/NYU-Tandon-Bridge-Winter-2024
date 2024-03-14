#include <iostream>
#include <string>
using namespace std;

bool isAnagrams(string strOne, string strTwo);
bool isLetter(char letter);

int main() {
    string firstSentence;
    string secondSentence;

    cout << "Are these strings anagrams?" << endl;
    cout << "Enter first string: ";
    getline(cin, firstSentence);
    cout << "Enter second string: ";
    getline(cin, secondSentence);

    if(isAnagrams(firstSentence, secondSentence)){
        cout<<"Strings are anagrams"<<endl;
    } else{
        cout<<"Strings are not anagrams"<<endl; 
    }

    return 0;
}

bool isAnagrams(string strOne, string strTwo) {


    return true;
}

bool isLetter(char letter) {
    return (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z');
}