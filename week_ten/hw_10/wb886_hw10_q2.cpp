#include <iostream>
using namespace std;

const int ARRSIZE = 6;

int* findMissing(int arr[], int n, int& res_arr_size);

int main()
{
     int arr[ARRSIZE] = {3, 1, 3, 0, 6, 4};
     int * arrPtr = NULL;
     int reSizeArr = 0;

     findMissing(arr,ARRSIZE,reSizeArr);
 
    return 0;
}

int* findMissing(int arr[], int &tgt, int &resArrSize){

}