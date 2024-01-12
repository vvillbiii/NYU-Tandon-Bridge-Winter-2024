#include <iostream>
using namespace std;

int main(){
    float c; 
    float f;

    cout << "Enter temperature in Celsius: "<<endl;
    cin >> c;

 
    f = c * (9.0 / 5.0) + 32;

    
    cout <<"Temperature in Fahrenheit"<<f<< endl;

    return 0;
}