#include <iostream>
using namespace std;

const int ARRSIZE = 6;

int* findMissing(int arr[], int n, int& resArrSize);
void  printArray(int arr[], int arrSize);

int main()
{
     int arr[ARRSIZE] = {3, 1, 3, 0, 6, 4};
     int reSizeArr = 0;

    int* arrPtr = findMissing(arr,ARRSIZE,reSizeArr);
    cout << "Original: ";
    printArray(arr, ARRSIZE);
    cout << endl;
    cout << "Modified: ";
    printArray(arrPtr, reSizeArr);
    cout << endl;
 
    return 0;
}

int* findMissing(int arr[], int n, int &resArrSize){
   int countValues[n + 1];
    resArrSize = n+1;
    for (int i = 0; i < n; i++) {
        if (countValues[arr[i]] == 0) resArrSize--;
        countValues[arr[i]]++;
    }
    
    int *outputArray = new int[resArrSize];
    for (int i = 0, j = 0; i < n + 1; i++) {
        if (countValues[i] == 0) {
            outputArray[j++] = i;
        }
    }
    return outputArray;  

}

void  printArray(int arr[], int arrSize) {
    cout << "[";

    for (int i = 0; i < arrSize; i++) {
        cout << "\"" << arr[i] << "\"";

        if (i != arrSize - 1) {
            cout << ", ";
        }
    }

    cout << "]"<<endl;
}