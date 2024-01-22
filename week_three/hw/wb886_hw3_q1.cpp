#include <iostream>
using namespace std;

const double DISCOUNT = 0.10;

int main()
{   
    int firstItem, SecondItem;
    double taxRate, discountPrice, totalPrice, basePrice;
    char clubCard;

    cout << "Enter the price of first item: ";
    cin >> firstItem;
    cout << "Enter the price of second item: ";
    cin >> SecondItem;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> clubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;
   
    basePrice = firstItem + SecondItem;

    if(firstItem > SecondItem && clubCard){
        firstItem = firstItem / 2;
    } else {
        SecondItem = SecondItem / 2;
    }

 
    

    cout << "Base price: "<< basePrice <<endl;
    cout << "Price after discounts: " <<endl;
    cout << "Total price: "<<endl;
    return 0;
}