#include <iostream>
#include <vector>
#include <cmath>
void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i<vin.size();i++){
        if (vin[i]>=t){
            vout.push_back(vin[i]);
        }
    }
}
int main(){
    double t = 1;
    std::vector<double> vout;
    std::vector<double> vin{3, 0.5, -1,-100, 2, 4, 5};
    filter_v(vin,t,vout);
    for(double i : vout){
        std::cout<<i<<" ";
    }

}