#include <iostream>
using namespace std;

int main()
{
    int n, lines;
    cout << "Enter a positive integer: ";
    cin >> n;

    lines = 2 * n;

    for(int i = 1; i <= lines; i++){
        cout<<"*"<<endl;
    }


    return 0;
}