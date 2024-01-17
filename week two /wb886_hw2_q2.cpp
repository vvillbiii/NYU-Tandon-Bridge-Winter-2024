#include <iostream>
using namespace std;

const int DOLLAR = 100;
const int QUARTERS = 25; 
const int DIMES = 10;
const int NICKELS = 5;

int main()
{
    int dollar, cents, totalCents, quarters, dimes, nickels, pennies;
    
    
    cout << "Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin >> dollar>>cents;
    cout << dollar << " dollars and "<< cents << " cents are:"<<endl;

    totalCents = dollar * DOLLAR + cents;
    
    quarters = totalCents / QUARTERS;
    totalCents = totalCents % QUARTERS;

    
    dimes = totalCents / DIMES;
    totalCents = totalCents % DIMES;

    
    nickels = totalCents / NICKELS;
    totalCents = totalCents % NICKELS;

    
    pennies = totalCents;

    cout<<quarters<<" quarters, " << dimes << " dimes, " << nickels << " nickels and " <<pennies << " pennies" ;

    return 0;   
}