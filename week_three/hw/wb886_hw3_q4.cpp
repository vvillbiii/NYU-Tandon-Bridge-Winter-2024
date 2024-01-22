#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1; 
const int CEILING_ROUND = 2; 
const int ROUND = 3;

int main()
{   
    double realNum;
    int method;

    cout << "Please eneter a Real number: " <<endl;
    cin >> realNum;

    cout << "Choose your rounding method:\n";
    cout <<"1. Floor round\n";
    cout <<"2. Ceiling round\n";
    cout <<"3. Round to the nearest whole number"<<endl;
    cin >> method;


  
   switch (method) {
    case FLOOR_ROUND:
        cout << "Floor round";
        break;
    case CEILING_ROUND:
        cout << "Ceiling round";
        break;
    case ROUND:
        cout << "Round to the nearest whole number";
        break;
}
    return 0;
}