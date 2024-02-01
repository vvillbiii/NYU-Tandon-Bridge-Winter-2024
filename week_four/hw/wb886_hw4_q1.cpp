#include <iostream>
using namespace std;

int main()
{
    int inputNum, i;
    cout << "Please enter a positive integer: ";
    cin >> inputNum;

    cout << "Section A"<<endl;
    while(i <= inputNum * 2){
        if(i % 2 == 0){
            cout << i <<endl;
        }
        i++;
    }


    cout << "Section B"<<endl;
    for(i = 1; i <= inputNum * 2; i++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }

    return 0;
}