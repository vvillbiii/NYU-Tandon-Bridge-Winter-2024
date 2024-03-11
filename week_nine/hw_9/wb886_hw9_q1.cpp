#include <iostream>
#include <string>
using namespace std;

int getWordCount(string sentence);

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
        if(sentence[i] == ' ' || sentence[i] == '.' || sentence[i] == ','){
            wordCount++;
        }
    }

    return wordCount;
}