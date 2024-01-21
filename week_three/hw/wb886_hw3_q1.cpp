#include <iostream>
using namespace std;

const double DISCOUNT = 0.10;

int main()
{   
    int firstItem, SecondItem, basePrice;
    double taxRate, discountPrice, totalPrice;
    char clubCard;

    basePrice = firstItem + SecondItem;

    
    cout << "Enter the price of first item: "<<endl;
    cin >> firstItem;
    cout << "Enter the price of second item: "<<endl;
    cin >> SecondItem;
    cout << "Does customer have a club card? (Y/N): "<<endl;
    cin >> clubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: "<<endl;
    cin >> taxRate;
    cout << "Base price: "<< basePrice <<endl;
    cout << "Price after discounts: "<<endl;
    cout << "Total price: "<<endl;

    
    return 0;
}