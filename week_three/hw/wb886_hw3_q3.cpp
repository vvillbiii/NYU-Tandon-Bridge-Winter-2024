#include <iostream>
#include <cmath> 
using namespace std;


int main()
{   
    int a, b, c;
    double discriminant, x1, x2;


    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;

    discriminant = (b * b) - 4 * a * c;

    if(a == 0 && b == 0 && c == 0){
        cout << "Infinite number of solutions";

    } else if (discriminant > 0) {
        

        x1 = (-b + (sqrt(discriminant))) / 2 * a;
        x2 = (-b - (sqrt(discriminant))) / 2 * a;

        cout << "This equation has two real solutions x= " << x1 << " x= " << x2;

    }else if (discriminant == 0) {
        
        x1 = -b / (2 * a);
        cout << "This equation has a single real solution " << "x= " << x1;

    }else {
        
        cout << "This equation has no real solution";
    }

   
    return 0;
}