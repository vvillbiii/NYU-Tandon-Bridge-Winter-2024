#include <iostream>
using namespace std;

int main()
{
    int input, remainder, currNum, even, odd, divider;
    cout <<"Please enter a positive integer: ";
    cin >> input;

    for(int digit = 1; digit <= input; digit++){
            currNum = digit;
            even = 0;
            odd = 0;
        while (currNum > 0){

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
            
            currNum /= 10;
        }

        if(even > odd){
            cout << digit << endl;
        }
    }

    return 0;
}
