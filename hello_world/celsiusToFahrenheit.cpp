#include <iostream>
using namespace std;

int main(){
    float celsius; 
    float fahrenheit;

    cout << "Enter temperature in Celsius: "<<endl;
    cin >> celsius;

 
    fahrenheit = celsius * (9.0 / 5.0) + 32;

    
    cout <<"Temperature in Fahrenheit "<<fahrenheit<< endl;

    return 0;
}