#include <iostream>
#include <vector>
#include <cmath>
std::vector<double> append_vectors(const std::vector<double>& vin1, const std::vector<double> vin2, std::vector<double>& vout){
    for(double i:vin1){
        vout.push_back(i);
    }
    for(double i:vin2){
        vout.push_back(i);
    }
    return vout;
}
int main(){
    std::vector<double> vout;
    std::vector<double> v1{3, 0.5, -1,-100};
    std::vector<double> v2{32, 0.2, -10,-1};
 
    for(double i:append_vectors(v1,v2,vout)){
        std::cout<< i << " ";
    }
}