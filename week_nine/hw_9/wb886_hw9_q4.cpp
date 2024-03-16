#include <iostream>
using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize);
void printArray(int arr[], int arrSize);

const int ARRSIZE = 6;

int main() {
    int arr[ARRSIZE] = {5, 2, 11, 7, 6, 4};

    cout<<"Original Array: ";
    printArray(arr, ARRSIZE);

    cout<<"Flipped Array: ";
    oddsKeepEvensFlip(arr, ARRSIZE);
    printArray(arr, ARRSIZE);

   

    return 0;
}

void oddsKeepEvensFlip(int arr[], int arrSize){
    int tempArr[arrSize];
    int start = 0, end = arrSize - 1;

    for(int i = 0; i < arrSize; i++){
        if(arr[i] % 2 == 0){
            tempArr[end--] = arr[i];
        } else{
            tempArr[start++] = arr[i];
        }
    }

    for(int i = 0; i < arrSize; i++){
        arr[i]= tempArr[i];
    }
}

void printArray(int arr[], int arrSize){
    for(int i = 0; i < arrSize; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}