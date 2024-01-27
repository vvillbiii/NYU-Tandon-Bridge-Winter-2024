#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Please enter a positive integer: ";
    cin >> n;

    cout << "Section A"<<endl;
    while(i <= n * 2){
        if(i % 2 == 0){
            cout << i <<endl;
        }
        i++;
    }


    cout << "Section B"<<endl;
    for(i = 1; i <= n * 2; i++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }

    return 0;
}