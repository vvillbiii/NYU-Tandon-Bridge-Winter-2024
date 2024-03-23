#include <iostream>
using namespace std;

const int ARRSIZE = 6;

int* findMissing(int arr[], int n, int& resArrSize);
void printArray(int arr[], int arrSize);

int main()
{
    int arr[ARRSIZE] = {3, 1, 3, 0, 6, 4};
    int reSizeArr = 0;

    int* arrPtr = findMissing(arr,ARRSIZE,reSizeArr);
    cout << "Original: ";
    printArray(arr, ARRSIZE);
    cout << endl;
    
    cout << "Missing: ";
    printArray(arrPtr, reSizeArr);
    cout << endl;

    delete[] arrPtr;
 
    return 0;
}

int* findMissing(int arr[], int n, int &resArrSize){
    int* countValues = new int[n + 1]();
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] <= n) {
            countValues[arr[i]]++;
        }
    }

    int count = 0;
    for (int i = 0; i <= n; i++) {
        if (countValues[i] == 0) {
            count++;
        }
    }

    int* outputArray = new int[count];
    int index = 0;
    for (int i = 0; i <= n; i++) {
        if (countValues[i] == 0) {
            outputArray[index++] = i;
        }
    }

    resArrSize = count;
    delete[] countValues;
    return outputArray;  

}

void  printArray(int arr[], int arrSize) {
    cout << "[";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i];
        if (i != arrSize - 1) {
            cout << ", ";
        }
    }
    cout << "]"<<endl;
}