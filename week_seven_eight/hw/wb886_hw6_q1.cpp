#include <iostream>
using namespace std;

// The Fibonacci numbers sequence, Fn, is defined as follows:
// F1 is1,F2 is1,and Fn =Fn-1 +Fn-2 forn=3,4,5,...
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

    return 0;
}