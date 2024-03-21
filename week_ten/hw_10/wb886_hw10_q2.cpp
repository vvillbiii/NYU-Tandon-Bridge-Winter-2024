#include <iostream>
using namespace std;

const int ARRSIZE = 6;

int* findMissing(int arr[], int n, int& res_arr_size);

int main()
{
     int arr[ARRSIZE] = {3, 1, 3, 0, 6, 4};
     int * arrPtr = NULL;
     int reSizeArr = 0;

    (arr,ARRSIZE,reSizeArr);
 
    return 0;
}

int* findMissing(int arr[], int n, int &resArrSize){

    int elementCount = 0;
    int i = 0;
    int j = 0;

    while (i <= n){
    
        if (arr[j] == i){
            j = 0;
            i++;
        }
        else if (arr[j] != i && j != resArrSize - 1){
            j++;
        }


        if (j == resArrSize - 1 && arr[j] != i){
            elementCount++;
            i++;
            j = 0;
            
        }
        else if (j == resArrSize - 1 && arr[j] == i){
            i++;
            j = 0;
        }

    }

}