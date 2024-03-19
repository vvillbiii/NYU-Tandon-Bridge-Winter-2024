#include <iostream>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);
void printWordsArray(const string arr[], int arr_size);

int main()
{
    string sentence;
    int wordArrSize = 0;
    cout<<"Enter sentence: ";
    getline(cin, sentence);

    string* wordArr = createWordsArray(sentence, wordArrSize);

    printWordsArray(wordArr, wordArrSize);

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

    return wordArr;
}


void  printWordsArray(const string arr[], int arr_size) {
    cout << "[";

    for (int i = 0; i < arr_size; i++) {
        cout << "\"" << arr[i] << "\"";

        if (i != arr_size - 1) {
            cout << ", ";
        }
    }

    cout << "]"<<endl;
}