#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() 
{
    int x1, x2, x3, x4;

    srand(time(0));

    x1 = rand();
    x2 = rand();
    x3 = rand() % 100;
    x4 = (rand() % 100) + 1;

    cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;

    return 0; 
 }