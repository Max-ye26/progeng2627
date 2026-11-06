#include <iostream>
#include <cmath>
int mypow(int(x),int(n)){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+std::pow(x,i);
    }
    return sum;

}

int main() {
    int x,n;
    std::cin>>x>>n;
    std::cout<<mypow(x,n);

}