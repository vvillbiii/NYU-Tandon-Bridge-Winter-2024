#include <iostream>
using namespace std;

void printArray(int arr[], int arrSize);
void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);
bool isEven(int n);

int main() {

    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;

    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;

    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;

    reverseArray(arr1, arr1Size); 
    printArray(arr1, arr1Size);

    removeOdd(arr2, arr2Size); 
    printArray(arr2, arr2Size);

    splitParity(arr3, arr3Size); 
    printArray(arr3, arr3Size);
  
    return 0;
}

bool isEven(int n) {
    return n % 2 == 0;
}

void printArray(int arr[], int arrSize){ 
    for (int i = 0; i < arrSize; i++) { 
        cout<<arr[i]<<' ';
        }
    cout<<endl;
}

void reverseArray(int arr[], int arrSize) {
    for (int i = (arrSize - 1) / 2; i >= 0; i--) {
        int temp = arr[arrSize - 1 - i]; 
        arr[arrSize - 1 - i] = arr[i]; 
        arr[i] = temp; 
    }
}

void removeOdd(int arr[], int& arrSize) {
    int currentIndex = 0;
    int sizeDecrease = 0;

    for (int i = 0; i < arrSize; i++) {
        if (isEven(arr[i])) {
            arr[currentIndex++] = arr[i];
        }else {
            sizeDecrease++;
        }
    }
    arrSize -= sizeDecrease;
}

void splitParity(int arr[], int arrSize) {
    int currentIndex = 0;

    for (int i = 0; i < arrSize; i++) {
        if (!isEven(arr[i])) {
            int temp = arr[currentIndex];
            arr[currentIndex++] = arr[i];
            arr[i] = temp;
        }
    }
}