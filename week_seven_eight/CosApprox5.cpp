#include <iostream>
using namespace std;

double quad_cos(double x, int n);
double linear_cos(double x, int n);
double factorial(int n);
double power(double base, int exp);
int main() {
    int i;

    cout.precision(30);
    for(i=1; i<=10; i++){
        cout << "n = " << i << ": " << quad_cos(1, i) <<" "<<linear_cos(1, i)<< endl;
    }
    return 0;
}

double factorial(int n){
    double prod;
    int count;

    if(n == 0)
        return 1;
    else{
        prod = 1;
        for(count = 1; count <= n; count += 1)
            prod *= count;
    }

    return prod;
}

double power(double base, int exp){
    double prod;
    int count;

    if(exp == 0)
        return 1;
    else{
        prod = 1;
        for(count = 1; count <= exp; count += 1)
            prod *= base;

        return prod;
    }
}

double quad_cos(double x, int n){
    double sumRes;
    double currTerm;
    int k, sign;

    sumRes = 0;
    for(k = 0, sign = 1; k <= (n-1); k += 1, sign *= -1){
        currTerm = power(x, 2*k) / factorial(2*k);
        sumRes += sign * currTerm;
    }

    return sumRes;
}

double linear_cos(double x, int n){
    double sumRes;
    int k;
    int sign;
    double currTerm, currPower, currFactorial;

    sumRes = 0;
    currPower = 1;
    currFactorial = 1;
    for(k = 0, sign = 1; k <= (n-1); k += 1, sign *= -1){
        currTerm = currPower / currFactorial;
        sumRes += sign * currTerm;
        currPower *= (x * x);
        currFactorial *= (2*k + 1) * (2*k + 2);
    }

    return sumRes;

}