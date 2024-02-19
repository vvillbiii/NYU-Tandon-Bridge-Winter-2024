#include <iostream>
using namespace std;

void printDivisors(int num);

int main()
{
    int num;
    cout<<"Please enter a positive integer >= 2: ";
    cin >> num;

    if(num < 2){
        cout<<"Integer needs to be greater than or equal to 2. ";
    } else {
        printDivisors(num);
    }

    return 0;
}


void printDivisors(int num){
    for(int i = 0; i <= num/2; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }
}