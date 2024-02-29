#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
void printYearCalender(int year, int startingDay);

int main()
{
    printMonthCalender(31, 4);

    return 0;
}


int printMonthCalender(int numOfDays, int startingDay){

    cout<<"Mon\tTues\tWed\tThr\tFri\tSat\tSun"<<endl;

    for(int i = 1; i < startingDay; i++){
        cout<<"\t";
    }

    for(int i = 1; i <= numOfDays; i++){
        if((i + startingDay - 1) % 7 == 0){
            cout<< i <<endl;
        } else {
            cout<<i<<"\t";
        }
    }
    
    return 0;
}


