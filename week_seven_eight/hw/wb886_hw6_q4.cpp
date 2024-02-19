#include <iostream>
#include <cmath>
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
    // need to think about how to get the second half of the number
    for(int i = 0; i < sqrt(num); i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }

    for(int i = 0; i <= num/2; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }
}