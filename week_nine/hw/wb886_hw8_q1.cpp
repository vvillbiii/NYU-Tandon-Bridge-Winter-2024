#include <iostream>
using namespace std;

int minInArray(int arr[], int arrSize);

const int SIZE = 20;

int main()
{
    int myArray[SIZE];
    int min;

    cout<<"Please enter 20 integers separated by a space:"<<endl;
    for(int i = 0; i < SIZE; i++){
        cin>>myArray[i];
    }

    min = minInArray(myArray, SIZE);
    cout<<"The minimum value is " << min << ", and it is located in the following indices: ";

    for(int i = 0; i < SIZE; i++){
        if(myArray[i] == min){
            cout<<i <<" ";
        }
    }

    return 0;
}

int minInArray(int arr[], int arrSize){
    int min = arr[0];

    for(int i = 0; i < arrSize; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;   
}