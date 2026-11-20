#include <vector>
#include <iostream>

double factorial(const int n)
{
    double f = 1;
    for (int i=1; i<=n; ++i)
        f *= i;
    return f;
}
double n_th_catalan(double n){
    double res = factorial(2*n)/(factorial(n+1)*factorial(n));
    return res;
}
main(){
    std::vector<double> catalan_numbers;
    int nth;
    std::cin>>nth;
    for(int i = 0 ; i<nth;i++){
        catalan_numbers.push_back(n_th_catalan(i));

    }
    for(int i = 0 ; i<nth;i++){
        std::cout<<"C"<<i<<" = "<<catalan_numbers[i]<<std::endl;
    }
}

