#include <iostream>
using namespace std;

const int DAYS = 24;
const int HOURS = 60;


int main()
{
    int jd,jh, jm, bd, bh, bm, totalDays, totalHours, totalMinutes;
    
    // john
    cout<< "Please enter the number of days John has worked:";
    cin >> jd;
    cout<< "Please enter the number of hours John has worked:";
    cin >> jh;
    cout<< "Please enter the number of minutes John has worked:";
    cin >> jm;
    
    //Bill
      cout<< "Please enter the number of days Bill has worked:";
    cin >> bd;
    cout<< "Please enter the number of hours Bill has worked:";
    cin >> bh;
    cout<< "Please enter the number of minutes Bill has worked:";
    cin >> bm;


    return 0;
}