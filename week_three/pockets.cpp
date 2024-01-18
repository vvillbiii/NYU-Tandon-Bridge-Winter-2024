#include <iostream>
using namespace std;

int main(){
    int pocket;
    cout << "Enter pocket number: ";
    cin >> pocket;

    if (pocket == 0)
        cout << "green";
    else if (pocket > 0 && pocket <= 10){
       
        if (pocket % 2 == 0)
            cout << "red";
        else 
            cout << "black";
        
    }
    else if (pocket > 10 && pocket <= 18){
        
        if (pocket % 2 == 0)
            cout << "red";
        else 
            cout << "black";
        
    }
    else if (pocket > 18 && pocket <= 28){
        
        if (pocket % 2 == 0)
            cout << "red";
        else 
            cout << "black";
        
    } 
     else if (pocket > 28 && pocket <= 36){
        
        if (pocket % 2 == 0)
            cout << "red";
        else 
            cout << "black";
        
    }
    else {
        cout << "error";
    }

    return 0;
}