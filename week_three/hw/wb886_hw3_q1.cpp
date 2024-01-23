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



    if(clubCard == 'Y' || 'y'){
    
        if(firstItem < SecondItem){
            firstItem = firstItem / 2;
            
            discountPrice = basePrice - (basePrice * DISCOUNT) - firstItem;
        } else {
            SecondItem = SecondItem / 2;
            
            discountPrice = basePrice - (basePrice * DISCOUNT) - SecondItem;
        }


    } else {
        // this is for if the user puts n
        if(firstItem < SecondItem ){
            firstItem = firstItem / 2;
            discountPrice = basePrice - firstItem;
        } else {
            SecondItem = SecondItem / 2;
            discountPrice = basePrice - SecondItem;
        }
    }
   

    totalPrice = discountPrice + ((taxRate / 100.00) * discountPrice);
 
    

    cout << "Base price: "<< basePrice <<endl;
    cout << "Price after discounts: " << discountPrice <<endl;
    cout << "Total price: " << totalPrice <<endl;
    return 0;
}