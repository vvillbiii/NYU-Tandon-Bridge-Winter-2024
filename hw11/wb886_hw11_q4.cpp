#include <iostream>
using namespace std;

int minCost(int arr[], int arrSize);

int main()
{
    int costs[] = {0, 3, 80, 6, 57, 10};
    int size = 6;

    cout << "Minimum cost: " << minCost(costs, size) << endl;
    return 0;
}

int minCost(int arr[],int arrSize)
{
    if (arrSize <= 2)
        return arr[arrSize - 1];
    else {
        int one = arr[arrSize - 1] + minCost(arr, arrSize - 1);
        int two = arr[arrSize - 1] + minCost(arr, arrSize - 2);
        if (one > two)
            return two;
        else
            return one;
    }
}