# include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter an interger: ";
    cin >> input;

    for(int i = 1; i <= input;i++){
      
        for(int k = 1; k <= input; k++){
            cout << " ";
        }

        for(int j = 1; j <= 2 * input + i; j++){
            cout << j;
        }
        
        cout << endl;
    }

    return 0;
}