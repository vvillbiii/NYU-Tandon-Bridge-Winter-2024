#include <iostream>
using namespace std;

const double TENPERCENT = 0.1;
const double TWENTYPERCENT = 0.2;
const double THRDPERCENT = 0.3;
const double FOURTYPERCENT = 0.4;
const int PRICE = 99;

int main(){
    int quantity, total, discount, all;
    cout << "Enter quantity: ";
    cin >> quantity;

    if (quantity  < 10)
        cout << "no discount";
    else if (quantity <= 10 && quantity <= 19){
      total = PRICE *  quantity;  
      discount =  total * TENPERCENT;
      cout<< "your discount is $"<<discount<<" and your total is $"<<total;  
    }
    else if (quantity <= 20 && quantity <= 49){
      total = PRICE *  quantity;  
      discount =  total * TENPERCENT;
      cout<< "your discount is $" <<discount<<" and your total is $"<<total;
    }
    else if (quantity <= 50 && quantity <= 99){
      total = PRICE *  quantity;  
      discount =  total * TENPERCENT;
      cout<< "your discount is $" <<discount<<" and your total is $"<<total;
    } 
    else {
      total = PRICE *  quantity;  
      discount =  total * TENPERCENT;
      cout<< "your discount is $" <<discount<<" and your total is $"<<total;
        
    }

    return 0;
}