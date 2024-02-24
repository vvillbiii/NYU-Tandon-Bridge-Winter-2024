double eApprox(int n){
    double sum = 1.0;

    for(int i = 1; i  <= n; i++){
        sum *= i;
    }

    return sum;
}