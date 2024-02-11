#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() 
{
    int x1, userGuess, attempts, minRange = 1, maxRange = 100;

    srand(time(0));

    x1 = (rand() % 100) + 1;
    attempts = 5;

    // This is the number the user is supposed to guess
    // cout<<x1<<endl;

    cout<< "I thought of a number between 1 and 100! Try to guess it."<<endl;
    while(attempts > 1 || userGuess != x1){

        cout <<"Range: [" << minRange << ", " << maxRange << "], Number of guesses left: " << attempts <<endl;
        cout << "Your guess: ";
        cin >> userGuess;

        if(userGuess == x1){
            cout<<"Congrats! You guessed my number in "<< attempts	<< " guesses.";
            break;
        }

        if(attempts == 1 && userGuess != x1){
            cout <<"Out of guesses! My number is "<< x1<< endl;
            break;
        }
            
        if(userGuess < x1){
            cout<< "Wrong! My number is bigger." <<endl;
            minRange = userGuess + 1;
        } else {
            cout<< "Wrong! My number is smaller."<<endl;
            maxRange = userGuess - 1;
        }
          


        attempts--;
    }


    return 0; 
 }