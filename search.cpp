#include <iostream>
#include <vector>
#include <cmath>
int s;
int search(const std::vector<double>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i]==s){
            return i;
        }
    }
    return -1;
}
int main(){
    std::vector<double> vin{3, 0.5, -1,-100};
    std::cin>>s;
    std::cout << search(vin) << std::endl;

}