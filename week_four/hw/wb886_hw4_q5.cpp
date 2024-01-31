#include <iostream>
using namespace std;

int main()
{
    int userNum, lines;
    cout << "Enter a positive integer: ";
    cin >> userNum;

    lines = 2 * userNum;

    for(int lineCount = 1; lineCount <= userNum; lineCount++){

        for(int space = 1; space <= lineCount; space++){
            cout << " ";
        }

        for(int stars = lines - lineCount; stars >= lineCount; stars--){
            cout<< "*";
        }

        cout << endl;
    }

   for(int lineCount = 1; lineCount <= userNum; lineCount++){

        for(int space = 0; space <= userNum - lineCount; space++){
            cout << " ";
        }

        for(int stars = 1; stars <= 2 * lineCount - 1; stars++){
            cout << "*";
        }
        cout << endl;

    }

    return 0;
}