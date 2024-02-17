#include <iostream>
using namespace std;

double eApprox(int n);

int main()
{
  

    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl; 
    }


    return 0;
}


