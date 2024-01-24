#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1; 
const int CEILING_ROUND = 2; 
const int ROUND = 3;

int main()
{   
    double realNum;
    int method, roundNum;

    cout << "Please enter a Real number: " <<endl;
    cin >> realNum;

    cout << "Choose your rounding method:\n";
    cout <<"1. Floor round\n";
    cout <<"2. Ceiling round\n";
    cout <<"3. Round to the nearest whole number"<<endl;
    cin >> method;


  
   switch (method) {
    case FLOOR_ROUND:
        roundNum = realNum;
        cout << roundNum;
        break;
    case CEILING_ROUND:
        roundNum = realNum;
        if(realNum > 0)
            roundNum = realNum + 1;
        
        cout << roundNum;
        break;
    case ROUND:
        roundNum = realNum;
         if(realNum - roundNum > 0.5)
            roundNum = realNum + 1;
        cout << roundNum;
        
        break;
}
    return 0;
}