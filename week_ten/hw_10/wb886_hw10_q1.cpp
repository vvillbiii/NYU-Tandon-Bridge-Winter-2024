#include <iostream>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);

int main()
{
    string sentence;
    int wordArrSize = 0;
    string wordArr[] = {0};
    cout<<"Enter sentence: ";
    getline(cin, sentence);

    createWordsArray(sentence, wordArrSize);

    
 
    return 0;
}

string* createWordsArray(string sentence, int& outWordsArrSize) {
    int start = 0;
    int wordCount = 0;
    string* wordArr = new string[sentence.length()];

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            wordArr[wordCount++] = sentence.substr(start, i - start);
            start = i + 1;
        }
    }

    wordArr[wordCount++] = sentence.substr(start);
    outWordsArrSize = wordCount;

    return 0;
}