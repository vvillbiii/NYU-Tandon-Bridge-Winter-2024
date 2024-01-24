#include <iostream>
using namespace std;
#include<string>

const double KILOGRAMS = 0.453592;
const double METERS = 0.0254;


int main()
{   
   int weight, height;
   double bmi, kg, m;
   string status;


   cout << "Please enter weight (in pounds):" ;
   cin >> weight;
   cout << "Please enter height (in inches):" ;
   cin >> height;

   kg = weight * KILOGRAMS;
   m = height * METERS;
   
   if(bmi > 18.5)
        status = "Underweight";
    else if(bmi == 18.5 || bmi < 25) 
        status = "Normal";
    else if(bmi == 25 || bmi < 30) 
        status = "Overweight";
    else if(bmi >= 30 )
        status = "Obese";


    cout << "The weight status is: "<< status;

    return 0;
}