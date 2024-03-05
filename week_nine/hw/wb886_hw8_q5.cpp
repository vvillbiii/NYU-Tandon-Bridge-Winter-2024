#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, middleName, lastName;

    cout<<"Please enter your name (first, middle, and last): ";
    cin>>firstName>>middleName>>lastName;
    cout << lastName << ", " << firstName << " " << middleName[0] << ".";

    return 0;
}