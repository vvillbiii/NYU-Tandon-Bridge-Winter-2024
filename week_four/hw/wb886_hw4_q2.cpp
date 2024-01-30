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
    int input, user;
    string romanDigit;
    cout <<"Enter decimal number:"<<endl;
    cin >> input;

    user = input;

    while(input > 0){
        if(input >= M){
            input -= M;
            romanDigit += "M";
        }
        else if(input >= D){
            input -= D;
            romanDigit += "D";
        }
        else if(input >= C){
            input -= C;
            romanDigit += "C";
        }
          else if(input >= L){
            input -= L;
            romanDigit += "L";
        }
          else if(input >= X){
            input -= X;
            romanDigit += "X";
        }
          else if(input >= V){
            input -= V;
            romanDigit += "V";
        }
        else if( input >= I){
            input -= I;
            romanDigit += "I";
        }
    }
   
    cout << user << " is "<< romanDigit;
    return 0;
}