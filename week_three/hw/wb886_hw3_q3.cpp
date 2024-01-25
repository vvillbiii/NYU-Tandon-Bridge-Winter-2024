#include <iostream>
#include <cmath> 
using namespace std;


// quadratic equation
// ax^2 + bx + c = 0

int main()
{   
    int a, b, c;
    double x;
    double sqrtResult;


    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;

    x = (b * b) - 4 * a * c;
    sqrtResult = sqrt(x);
    cout << x << " dis \n" << sqrtResult << " sqrtRest";

    if(a == 0 && b == 0 && c == 0){
        cout << "Infinite number of solutions";
    }

   
    return 0;
}