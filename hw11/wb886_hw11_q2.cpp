#include <iostream>
using namespace std;

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main()
{
    int arr1[] = { 2, -1, 3, 10 };

    cout << "PART A: " << sumOfSquares(arr1, 4) << endl;
    cout << "PART B: is sorted " << isSorted(arr1, 4);
    return 0;
}

int sumOfSquares(int arr[], int arrSize) {
    if (arrSize <= 0) return 0;
    else if (arrSize == 1) {
        return arr[arrSize - 1] * arr[arrSize - 1];
    }
    else {
        return arr[arrSize - 1] * arr[arrSize - 1] + sumOfSquares(arr, arrSize-1);
    }
}

bool isSorted(int arr[], int arrSize) {
    if (arrSize <= 1) {
        return true;
    }
    else {
        if (arr[arrSize - 2] > arr[arrSize - 1])
            return false;
        else
            return isSorted(arr, arrSize - 1);
    }
}