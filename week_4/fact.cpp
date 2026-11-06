#include <iostream>

int myfactorial(int x){
    int prod=1;
    for(int(i)=1;i<=x;i++){
        prod = prod * i;
    }
    return prod;
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}