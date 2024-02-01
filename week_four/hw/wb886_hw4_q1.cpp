#include <iostream>
using namespace std;

int main()
{
    int inputNum, i;

    cout << "Section A"<<endl;
    cout << "Please enter a positive integer: ";
    cin >> inputNum;
    while(i <= inputNum * 2){
        if(i % 2 == 0){
            cout << i <<endl;
        }
        i++;
    }

    inputNum = 0;
    cout << "Section B"<<endl;

    cout << "Please enter a positive integer: ";
    cin >> inputNum;
    for(i = 1; i <= inputNum * 2; i++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }

    return 0;
}