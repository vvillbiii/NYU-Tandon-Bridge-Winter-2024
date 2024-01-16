#include <iostream>
using namespace std;

int main()
{
    int quarters, dimes, nickels, pennies; 
    cout << "Please enter number of coins:"<<endl;
    cout << "# of quarters:";
    cin >> quarters;
    cout << "# of dimes:";
    cin >> dimes;
    cout << "# of nickels:";
    cin >> nickels;
    cout << "# of pennies:";
    cin >> pennies;
    cout << "The total is" << quarters + dimes + nickels + pennies;
    
    return 0;
}
