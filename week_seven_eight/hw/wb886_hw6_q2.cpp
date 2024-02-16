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

        for(int space = 1 ; space <= 2 * m - lines - 1; space++){
            cout<< " ";
        }
       

        for(int sign = 1; sign <= 2 * lines - 1; sign++){   
            cout<<symbol;
        }

        cout<< endl;;
    }

}