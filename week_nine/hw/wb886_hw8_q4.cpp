#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNum(int min, int max);
void displayMapping(int mapping[]);
int getUserResponse();
bool checkPIN(int response, int mapping[], int pin);

const int MAP_LENGTH = 10;
const int PIN_LENGTH = 5;
const int PIN = 12345;

int main() {
    srand((time(0)));

    int mapping[MAP_LENGTH];
    for (int i = 0; i < MAP_LENGTH; i++) {
        mapping[i] = generateRandomNum(1,3);
    }

    displayMapping(mapping);
    int response = getUserResponse();
    if(checkPIN(response, mapping, PIN)){
        cout<<"Your PIN is correct";
    } else{
        cout<<"Your PIN is not correct";
    }

    return 0;
}

int generateRandomNum(int min, int max) {
    return min + rand() % (max - min + 1);
}

void displayMapping(int mapping[]) {
    cout<<"Please enter your PIN according to the following mapping:"<<endl;
    cout << "PIN: ";
    for (int i = 0; i < MAP_LENGTH; i++) {
        cout << i << " ";
    }
    cout<<endl;

    cout << "NUM: ";
    for (int i = 0; i < MAP_LENGTH; i++) {
        cout << mapping[i] << " ";
    }
    cout <<endl;
}

int getUserResponse() {
    int response;
    cin >> response;
    return response;
}

bool checkPIN(int response, int mapping[], int pin){
   
    int temp = response;
    int digit, mappedDigit;
    for (int i = 0; i < PIN_LENGTH; i++) {
        digit = pin % 10;
        mappedDigit = temp % 10;
        if (mapping[digit] != mappedDigit) {
            return false;
        }
        pin /= 10;
        temp /= 10;
    }

    return true;
}