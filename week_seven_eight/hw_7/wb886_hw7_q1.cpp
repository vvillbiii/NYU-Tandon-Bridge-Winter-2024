#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
void printYearCalender(int year, int startingDay);

int main()
{
    printMonthCalender(31, 4);
    printYearCalender(2016, 5);

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

    int lastDay = (numOfDays + startingDay - 1) % 7;
    
    return lastDay;
}


void printYearCalender(int year, int startingDay){
    cout<<"January "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"February "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;
    
    cout<<"March "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"April "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"May "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"June "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"July "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"August "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"September "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"October "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"November "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;

    cout<<"December "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;
              
}