#include <iostream>
using namespace std;

const int DOLLAR = 100; 
const int QUARTERS =25; 
const int DIMES =10;
const int NICKELS=5;


int main()
{
    int quarters, dimes, nickels, pennies, total, dollar, cents; 
    cout << "Please enter number of coins:"<<endl;
    cout << "# of quarters:";
    cin >> quarters;
    cout << "# of dimes:";
    cin >> dimes;
    cout << "# of nickels:";
    cin >> nickels;
    cout << "# of pennies:";
    cin >> pennies;

    total = QUARTERS * quarters + DIMES * dimes + NICKELS * nickels + pennies;
    dollar = total / DOLLAR;
    cents = total % DOLLAR;
    cout << "The total is " << dollar << " dollars and "<< cents <<" cents";
    
    return 0;
}
