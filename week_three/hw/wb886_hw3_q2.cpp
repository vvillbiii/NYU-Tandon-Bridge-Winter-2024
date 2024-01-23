#include <iostream>
#include<string>
using namespace std;

int main()
{   
   string name;
   int gradYear, currYear, diff;
  
   cout << "Please enter your name: ";
   cin >> name;
    
    cout << "Please enter your graduation year: ";
    cin >> gradYear;

    cout << "Please enter your current year: ";
    cin >> currYear;

    diff = gradYear - currYear;

    if (diff > 4){
        cout << name << ", you are not in college";
    } else if(diff == 4){
        cout << name << ", you are a Freshman";
    } else if( diff == 3){
        cout <<  name << ", you are a Sophmore";
    } else if(diff == 2 ){
        cout <<  name <<  ", you are a Junior";
    } else if (diff == 1){
        cout <<  name <<  ", you are a Senior";
    } else {
        cout << name << ", you graduated.";
    }

    return 0;
}