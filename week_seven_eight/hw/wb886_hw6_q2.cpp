#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);


int main()
{
    printShiftedTriangle(3, 4, '+');
    
    return 0;
}


void printShiftedTriangle(int n, int m, char symbol){
    for(int lines = 1; lines <= n; lines++){
        cout << lines << endl;
    }

}