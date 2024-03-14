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
    int firstStrLetters[26] = {0};
    int secondStrLetters[26] = {0};

    getLetter(strOne, firstStrLetters);
    getLetter(strTwo, secondStrLetters);


    return true;
}

void getLetter(string sentence, int letterCount []){   
    for(int i = 0; i <= sentence.length(); i++){
        if(isLetter(sentence[i])){
           letterCount[tolower(sentence[i]) - 'a']++;
        }
    }
}

bool isLetter(char letter) {
    return (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z');
}