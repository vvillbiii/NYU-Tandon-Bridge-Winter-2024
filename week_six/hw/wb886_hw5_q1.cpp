#include <iostream>
using namespace std;

int main()
{
    int userInput;
    cout <<"Please enter a positive integer: " <<endl;
    cin >> userInput;

    for(int i = 1; i <= userInput; i++){
        cout << i << " ";
        for (int j = 2; j <= userInput; j++){
            if (i == 1){
                cout << " " <<  j << " ";
            } else {
                cout << " " << j * i << " ";
            }
        }

        cout << endl;
    }
    return 0;
}