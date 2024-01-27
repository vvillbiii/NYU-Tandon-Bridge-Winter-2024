#include <iostream>
using namespace std;

int main()
{
    int input;
    int i;
    int binaryNum = 0, remainder, position = 1;
    cout << "Enter decimal number:" <<endl;
    cin >> input; 

    i = input;

    while(input != 0){
        remainder = input % 2;
        binaryNum = (remainder * position) + binaryNum;
        position *= 10;
        input = input / 2;
    }



    cout << "The binary representation of "<< i << " is "<< binaryNum;
    return 0;
}