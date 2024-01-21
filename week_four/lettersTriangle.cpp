#include <iostream>
using namespace std;

int main() {
    int n, lineCount, spaceCount;
    char inputLetter;
    char currLetter, lastLetterToPrint;

    cout<<"Please enter a lower case letter"<<endl;
    cin>>inputLetter;

    cout<<"Line of letters"<<endl;
    for(currLetter = 'a'; currLetter <= inputLetter; currLetter += 1)
        cout<<currLetter;
    cout<<endl;

    cout<<endl<<"Triangle of letters"<<endl;
    n = (inputLetter - 'a') + 1;
    for(lineCount = 1, lastLetterToPrint = 'a';
        lineCount <= n;
        lineCount += 1, lastLetterToPrint += 1) {
        // print a sequence of (n - lineCount) spaces
        for(spaceCount = 1; spaceCount <= (n - lineCount); spaceCount += 1)
            cout<<" ";

        // print a sequence of letters up to lastLetterToPrint
        for(currLetter = 'a'; currLetter <= lastLetterToPrint; currLetter += 1)
            cout<<currLetter;

        // break the line
        cout << endl;
    }

    return 0;
}
