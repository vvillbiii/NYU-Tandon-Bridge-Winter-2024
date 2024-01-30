#include <iostream>
using namespace std;

int main()
{
    int input, remainder, temp, even, odd, divider;
    cout <<"Please enter a positive integer: ";
    cin >> input;

    for(int digit = 1; digit <= input; digit++){
            temp = digit;
            even = 0;
            odd = 0;
        while (temp > 0){

            remainder = digit % 10;
            if(remainder % 2 == 0){
                even++;
            } else {
                odd++;
            }

            divider = digit / 10;
            if(divider % 2 == 0){
                even++;
            } else {
                odd++;
            }
            
            temp /= 10;
        }

        if(even > odd){
            cout << digit << endl;
        }
    }

    return 0;
}



//   if(digit < 10){
//             if(digit % 2 == 0){
//                 cout << digit << endl;
//             }
//         }