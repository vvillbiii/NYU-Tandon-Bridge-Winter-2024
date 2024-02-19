#include <iostream>
using namespace std;

void printDivisors(int num);

int main()
{
    int num;
    cout<<"Please enter to number to find divisors: ";
    cin >> num;
    printDivisors(num);

    return 0;
}


void printDivisors(int num){
    for(int i = 0; i < num; i++){
        cout<< i;
    }
}