#include <iostream>
using namespace std;

int minCost(int costs[], int n);

int main()
{
    int costs[] = {0, 3, 80, 6, 57, 10};
    int size = 6;

    cout << "Minimum cost: " << minCost(costs, size) << endl;
    return 0;
}