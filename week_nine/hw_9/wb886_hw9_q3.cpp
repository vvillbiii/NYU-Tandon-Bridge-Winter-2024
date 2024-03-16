#include <iostream>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);

int main() {
    int arr[] = {3, -1, -3, 0, 6, 4};
    int arrSize = 6;

    int outPosArrSize;
    int* outPosArr;

    cout << "getPosNums1: ";
    int* result1 = getPosNums1(arr, arrSize, outPosArrSize);
    for (int i = 0; i < outPosArrSize; i++) {
        cout << result1[i] << " ";
    }
    delete[] result1;
    cout << endl;

    cout << "getPosNums2: ";
    int outPosArrSize2;
    int* result2 = getPosNums2(arr, arrSize, &outPosArrSize2);
    for (int i = 0; i < outPosArrSize2; i++) {
        cout << result2[i] << " ";
    }
    delete[] result2;
    cout << endl;

    cout << "getPosNums3: ";
    getPosNums3(arr, arrSize, outPosArr, outPosArrSize);
    for (int i = 0; i < outPosArrSize; i++) {
        cout << outPosArr[i] << " ";
    }
    delete[] outPosArr;
    cout << endl;

    cout << "getPosNums4: ";
    int* outPosArr4;
    int outPosArrSize4;
    getPosNums4(arr, arrSize, &outPosArr4, &outPosArrSize4);
    for (int i = 0; i < outPosArrSize4; i++) {
        cout << outPosArr4[i] << " ";
    }
    delete[] outPosArr4;
    cout << endl;
   

    return 0;
}

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize) {
  
    int* outArr = new int[arrSize];
    outPosArrSize = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outArr[outPosArrSize++] = arr[i];
        }
    }

    return outArr;
}


int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr) {
    int* outArr = new int[arrSize];
    int count = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outArr[count++] = arr[i];
        }
    }

    *outPosArrSizePtr = count;
    return outArr;
}

void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize) {
    int count = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }

    outPosArr = new int[count];
    outPosArrSize = count;
    int j = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outPosArr[j++] = arr[i];
        }
    }
}

void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr) {
    int count = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }

    *outPosArrPtr = new int[count];
    *outPosArrSizePtr = count;
    int j = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            (*outPosArrPtr)[j++] = arr[i];
        }
    }
}