#include <iostream>
using namespace std;

// The Fibonacci numbers sequence

int fib(int n);

int main()
{
    int num, numInSequence;
    cout << "Please enter a positive integer: ";
    cin >> num;

    numInSequence = fib(num); 

    cout << numInSequence;

    return 0;
}

int fib(int num){
     /*
        f1 + f2 = fib
        Each number is the sum of the two before it.
   
        f1 = 1 and f2 = 0 fib is 1
        1 + 0 = 1

        make f1 = fib(1) and f2 = old f1(1)
        1 + 1 = 2
        
        make f1 = fib(2) and f2 = old f1(1)
        2 + 1 = 3

        make f1 = fib(3) and f2 = old f1(2)
        3 + 2 = 5

        make f1 = fib(5) and f2 = old f1(3)
        5 + 3 = 8

        make f1 = fib(8) and f2 = old f1(5)
        8 + 5 = 13
        
    */

    int f1, f2, prevf1, fib;

    f1 = 1;
    f2 = 0;
    prevf1 = 0;

    for(int i = 1; i < num; i++){
        fib = f1 + f2;
        prevf1 = f1;
        f1 = fib;
        f2 = prevf1;
    }

    return fib;
}