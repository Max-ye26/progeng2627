#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(int argc, char* argv[]){
    std::ifstream infile; 
    infile.open(argv[1]);

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 

    }

    infile.close(); 


   

}