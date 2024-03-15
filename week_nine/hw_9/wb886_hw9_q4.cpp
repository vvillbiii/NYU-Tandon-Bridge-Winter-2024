#include <iostream>
using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize);
void printArray(int arr[], int arrSize);

const int ARRSIZE = 6;

int main() {
    int arr[ARRSIZE] = {5, 2, 11, 7, 6, 4};

    printArray(arr, ARRSIZE);

   

    return 0;
}

void printArray(int arr[], int arrSize){
    for(int i = 0; i < arrSize; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}