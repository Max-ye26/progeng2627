#include <iostream>
#include <vector>
#include <cmath>
int min_vector_element(const std::vector<double>& vin){
    double min=pow(2,32);
    for(double i:vin){
        if(i<min){
            min=i;
        }
    }
    return min;
}
int main(){
    std::vector<double> vin{3, 0.5, -1,-100};
    std::cout << min_vector_element(vin) << std::endl;

}