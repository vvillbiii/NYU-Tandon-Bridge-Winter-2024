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
    for(int i = 1; i <= 7; i++){
        if(i ==1 ){
            cout<< " Mon"<< "\t";
        } else if(i ==2){
            cout<< "Tue"<< "\t";
        } else if(i ==3){
            cout<< "Wed"<< "\t";
        } else if(i ==4){
            cout<< "Thr"<< "\t";
        } else if(i ==5){
            cout<< " Fri"<< "\t";
        } else if(i ==6){
            cout<< " Sat"<< "\t";
        } else {
            cout <<" Sun" <<"\t";
        }
        
       
    }
    
    
    return 0;
}


