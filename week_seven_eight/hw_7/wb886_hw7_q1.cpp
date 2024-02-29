#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
void printYearCalender(int year, int startingDay);
int daysInFeb(int year);

int main()
{
    int year, startingDay;
    cout<<"Please enter year and starting day with a space between both. ex(2016 5)"<<endl;
    cin>>year>>startingDay;
    printYearCalender(year, startingDay);

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

int daysInFeb(int year) {
 bool isLeapYear = (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));

  if (isLeapYear) {
    return 29;
  } else {
    return 28;
  }
}


void printYearCalender(int year, int startingDay){
    cout<<"January "<< year<<endl;
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout<<endl;

    cout<<"February "<< year<<endl;
    startingDay = printMonthCalender(daysInFeb(year), startingDay) + 1;
    cout<<endl;

    cout<<"March "<< year<<endl;
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout<<endl;

    cout<<"April "<< year<<endl;
    startingDay = printMonthCalender(30, startingDay) + 1;
    cout<<endl;

    cout<<"May "<< year<<endl;
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout<<endl;

    cout<<"June "<< year<<endl;
    startingDay = printMonthCalender(30, startingDay) + 1;
    cout<<endl;

    cout<<"July "<< year<<endl;
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout<<endl;

    cout<<"August "<< year<<endl;
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout<<endl;

    cout<<"September "<< year<<endl;
    startingDay = printMonthCalender(30, startingDay) + 1;
    cout<<endl;

    cout<<"October "<< year<<endl;
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout<<endl;

    cout<<"November "<< year<<endl;
    startingDay = printMonthCalender(30, startingDay) + 1;
    cout<<endl;

    cout<<"December "<< year<<endl;
    printMonthCalender(31, startingDay);
    cout<<endl;
              
}