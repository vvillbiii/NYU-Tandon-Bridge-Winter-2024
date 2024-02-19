#include <iostream>
using namespace std;

void printDivisors(int num);

int main()
{
    printDivisors(100);

    return 0;
}


void printDivisors(int num){
    for(int i = 0; i < num; i++){
        cout<< i;
    }
}