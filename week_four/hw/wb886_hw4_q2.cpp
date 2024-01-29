#include <iostream>
using namespace std;
#include <string>

// Romandigit I V X L C D M
// Decimalvalue 1 5 10 50 100 500 1000

const int M = 1000;
const int D = 500;
const int C = 100;
const int L = 50;
const int X = 10;
const int V = 5;
const int I = 1;

int main()
{
    int input, remainder, user;
    string romanDigit;
    cout <<"Enter decimal number:"<<endl;
    cin >> input;

    user = input;

    while(input != 0){
        if(input >= M){
            remainder = input % M;
            romanDigit = romanDigit + "M";
            input = input - M;
        }
        else if(input >= D){
            remainder = input % D;
            romanDigit = romanDigit + "D";
            input = input - D;
        }
        else if(input >= C){
            remainder = input % C;
            romanDigit = romanDigit + "C";
            input = input - C;
        }
          else if(input >= L){
            remainder = input % L;
            romanDigit = romanDigit + "L";
            input = input - L;
        }
          else if(input >= X){
            remainder = input % X;
            romanDigit = romanDigit + "X";
            input = input - X;
        }
          else if(input >= V){
            remainder = input % V;
            romanDigit = romanDigit + "V";
            input = input - V;
        }
        else if( input >= I){
            remainder = input % I;
            romanDigit = romanDigit + "I";
            input = input - I;
        }
    }
   
    cout << user << " is "<< romanDigit;
    return 0;
}