#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sequence, num, currNum = 1;
    cout << "Section A"<<endl;
    cout << "Please enter the length of the sequence: ";
    cin >> sequence;

    cout << "Please enter your sequence"<< endl;
    for(int numInSequence = 1; numInSequence <= sequence; numInSequence++){
        cin >> num;
        currNum *= num;

        if(numInSequence == sequence)
            cout << "The geometric mean is: " << pow(currNum, (1.0 /sequence)) <<endl;
    }


    cout << "Section B"<<endl;
    cout << "Please enter a non-empty sequence of positive integers,";
    cout << "each one in a separate line. End your sequence by typing -1:";
    return 0;
}