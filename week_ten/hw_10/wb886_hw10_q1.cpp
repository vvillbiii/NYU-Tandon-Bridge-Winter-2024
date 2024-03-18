#include <iostream>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);
bool isLetter(char letter);

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

string* createWordsArray(string sentence, int& outWordsArrSize){
    int wordCount = 0;
    int wordArr[] ={};
    string word;
    int start = 0;
    for(int i = 0; i < sentence.length(); i++){
        if(!isLetter(sentence[i])){
            wordCount++;
        } 
    }

   cout<<wordCount<<" word Count"<<endl;
}

bool isLetter(char letter) {
    return (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z');
}