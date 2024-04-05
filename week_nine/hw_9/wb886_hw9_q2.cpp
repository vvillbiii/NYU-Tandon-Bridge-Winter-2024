#include <iostream>
#include <string>
using namespace std;

const int ALPHABETNUM = 26;

bool isAnagrams(string strOne, string strTwo);
void getLetter(string sentence, int letterCount []);
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
        cout<<firstSentence << " and " << secondSentence << " are anagrams."<<endl;
    } else{
        cout<<firstSentence << " and " << secondSentence << " are not anagrams."<<endl;
    }

    return 0;
}

bool isAnagrams(string strOne, string strTwo) {
    int firstStrLetters[ALPHABETNUM] = {0};
    int secondStrLetters[ALPHABETNUM] = {0};

    getLetter(strOne, firstStrLetters);
    getLetter(strTwo, secondStrLetters);

    for(int i = 0; i < ALPHABETNUM; i++){
        if(firstStrLetters[i] != secondStrLetters[i]){
            return false;
        }
    }


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

