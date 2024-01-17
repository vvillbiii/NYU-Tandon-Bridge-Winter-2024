#include <iostream>
using namespace std;

const int DOLLAR = 100;
const int QUARTERS = 25; 
const int DIMES = 10;
const int NICKELS = 5;

int main()
{
    int dollar, cents;
    cout << "Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin >> dollar>>cents;
    cout << dollar << " dollars and "<< cents << " cents are:"<<endl;

    return 0;   
}