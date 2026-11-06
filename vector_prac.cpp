#include <iostream>
#include <vector>

int main(){
    int n,s,temp,count;
    count=0;
    std::vector<int> v,ind;
    std::cout<<"please enter n: "<<std::endl;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cout<<"please enter value: "<<std::endl;
        std::cin>>temp;
        v.push_back(temp);
    }
    std::cout<<"please enter s: "<<std::endl;
    std::cin>>s;
    for(int j=0;j<n;j++){
        if(v[j]==s){
            count++;
            ind.push_back(j);
        }
    }
    std::cout<< count << " element at position: ";
    for(auto k:ind){
        std::cout<<k<<" ";
    }
    
}