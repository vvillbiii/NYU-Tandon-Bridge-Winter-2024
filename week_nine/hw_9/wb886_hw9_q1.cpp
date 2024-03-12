#include <iostream>
#include <string>
using namespace std;

int getWordCount(string sentence);
bool isLetter(char letter);
void getLetter(string sentence, int WordCount, int letterCount []);

int main() {

    string sentence;
    int wordCount;
    int letterCount[26] = {0};
    cout<<"Please enter a line of text:"<<endl;
    getline(cin, sentence);

    wordCount = getWordCount(sentence);
    getLetter(sentence, wordCount, letterCount);

    cout<<wordCount<< " words" <<endl;

    for (int i = 0; i < 26; i++) {
        if (letterCount[i] > 0) {
            cout << letterCount[i] << " " << (char)(i + 'a') << endl;
        }
    }

    return 0;
}

int getWordCount(string sentence){
    int wordCount = 0;
    for(int i = 0; i < sentence.length(); i++){
        if(!isLetter(sentence[i])){
            wordCount++;
        } 
    }

    return wordCount;
}

void getLetter(string sentence, int count, int letterCount []){   
    for(int i = 0; i <= sentence.length(); i++){
        if(isLetter(sentence[i])){
           letterCount[tolower(sentence[i]) - 'a']++;
        }
    }
}

bool isLetter(char letter) {
    return (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z');
}