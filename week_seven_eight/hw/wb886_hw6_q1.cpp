#include <iostream>
using namespace std;

// The Fibonacci numbers sequence, Fn, is defined as follows:
// F1 is 1,F2 is 1,and Fn =Fn-1 +Fn-2 form=3,4,5,...
// In other words, each number is the sum of the previous two numbers. The first 10 numbers in Fibonacci sequence are: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55

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
    // fib = f1 + f2 
    //  Each number is the sum of the two before it.
    /*
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

    int f1, f2, fib;

    f1 = 1;
    f2 = 0;

    for(int i = 1; i <= num; i++){
     
    }

    return fib;
}