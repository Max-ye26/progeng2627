#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    std::vector<std::string>seen;
    for(std::string i : vin1){
        if(!(std::find(seen.begin(), seen.end(),i)!= seen.end())){
            seen.push_back(i);
        }        
    }
    for(std::string j : vin2){
        if(!(std::find(seen.begin(), seen.end(),j)!= seen.end())){
            seen.push_back(j);
        }       
    }
    return seen;

}
std::vector<std::string> intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    std::vector<std::string>intersect;
    for(std::string i : vin1){
        for(std::string j : vin2){
            if(i==j){
                if(!(std::find(intersect.begin(), intersect.end(),j)!= intersect.end())){
                intersect.push_back(i);
                }
            }
        }
    }
    return intersect;
    
}

int main(){
    for(std::string i : ){
        std::cout<<i<<std::endl;
    }

}