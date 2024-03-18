#include <iostream>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);
bool isLetter(char letter);

int main()
{
 
    return 0;
}

bool isLetter(char letter) {
    return (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z');
}