#include <iostream>
using namespace std;

int main()
{
    int n, lines;
    cout << "Enter a positive integer: ";
    cin >> n;

    lines = 2 * n;

    for(int i = 1; i <= lines; i++){

        
        for(int j = 1; j <= lines - i; j++)
            cout<< "*";

        cout << endl;
    }

   for(int i = 1; i <= lines; i++){

        
        for(int j = 1; j  <= lines - i ; j++)
            cout<< "*";

        cout << endl;
    }


    return 0;
}