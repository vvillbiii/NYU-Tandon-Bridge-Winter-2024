#include <iostream>
#include <string>
using namespace std;

int getWordCount(string sentence);
bool isNotLetter(char letter);

int main() {

    string sentence;
    int wordCount;
    cout<<"Please enter a line of text:"<<endl;
    getline(cin, sentence);

    wordCount = getWordCount(sentence);
    cout<<wordCount<< " words" <<endl;

    return 0;
}

int getWordCount(string sentence){
    int wordCount =0;
    for(int i = 0; i < sentence.length(); i++){
        if(isNotLetter(sentence[i])){
            wordCount++;
        } 
    }

    return wordCount;
}

bool isNotLetter(char letter){
    if(letter == ' ' || letter == '.' || letter == ',' ){
        return true;
    }
    return false;
}