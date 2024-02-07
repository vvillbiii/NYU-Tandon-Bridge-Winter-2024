#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() 
{
    int x1, x2, x3, x4, userGuess, attempts;

    srand(time(0));

    x1 = (rand() % 100) + 1;
    x2 = (rand() % 100) + 1;
    x3 = (rand() % 100) + 1;
    x4 = (rand() % 100) + 1;
    attempts = 5;

    cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;

    cout<< "I thought of a number between 1 and 100! Try to guess it."<<endl;
    while(attempts > 1 || userGuess != x1){
          if(userGuess == x1){
                cout<<" Congrats! You guessed my number in "<< attempts	<< " guesses.";
                break;
            }

            cout <<"Range: [1, 100], Number of guesses left: " << attempts <<endl;
            cout << "Your guess: ";
            cin >> userGuess;
            if(userGuess < x1){
                cout<< "Wrong! My number is bigger." <<endl;
            } else {
                cout<< "Wrong! My number is smaller."<<endl;
            }

          
        if(attempts == 1){
            cout <<"Out of guesses! My number is "<< x1<< endl;
            break;
        }


        attempts--;
    }


    return 0; 
 }