#include <iostream>
using namespace std;

int main()
{
    int n, lines;
    cout << "Enter a positive integer: ";
    cin >> n;

    lines = 2 * n;

    for(int lineCount = 1; lineCount <= n; lineCount++){

        for(int space = 1; space <= lineCount; space++){
            cout << " ";
        }

        for(int stars = lines - lineCount; stars >= lineCount; stars--){
            cout<< "*";
        }

        cout << endl;
    }

   for(int lineCount = 1; lineCount <= n; lineCount++){

        cout << lineCount;

        cout << endl;
    }


    return 0;
}