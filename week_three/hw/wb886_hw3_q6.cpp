#include <iostream>
#include<string>
using namespace std;

const double PEAK = 0.40;
const double AFTERHOURS = 0.25;
const double WEEKEND = 0.15;

int main()
{   
  
    int hour, minute, duration;
    string day;
    char temp;

    cout << "What day did you make the call? enter first two characters of day.  example (Mo Tu We Th Fr Sa Su): ";
    cin >> day;
    cout << "What time did the call start? enter in 24-notation ex. (13:30): ";
    cin>> hour>>temp>>minute;
    cout<<" How long did the call last in minutes? ";
    cin >> duration;

    // check hour input

    //check day
  
    return 0;
}