#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for(int c = 0; c < n; c++){
        std::cout << "*"; 
        // there is no << std::endl
        // because we want them on the same row
    }

}