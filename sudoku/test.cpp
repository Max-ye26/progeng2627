#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>
int mfind(int n, const std::vector<int>& v){
    for(int i = 0; i<v.size(); i++)
        if(n==v[i]){
            return i;
        }
    return -1;
}
bool check_sequence(const std::vector<int>& v){
    for(int i = 1; i <= v.size(); i++)
        if(mfind(i,v) == -1){
            return false;
        }
    return true;    
}
int twod_to_oned(int row, int col, int rowlen){
    return row*rowlen+col;
}
void get_row(int r, const std::vector<int>& in, std::vector<int>& out){
    int numProw=std::sqrt(in.size());
    for(int i = 0; i<numProw;i++){
        out.push_back(in[twod_to_oned(r,i,numProw)]);
    }
}
void get_col(int c, const std::vector<int>& in, std::vector<int>& out){
    int numProw=std::sqrt(in.size());
    for(int i = 0; i<numProw;i++){
        out.push_back(in[twod_to_oned(i,c,numProw)]);
    }
}
void get_subsq(int subs, const std::vector<int>& in, std::vector<int>& out){
    int numProw=std::sqrt(in.size());
    int numPss=std::sqrt(numProw);
    std::vector<int> fIndex;
    for(int i = 0; i<numPss;i++){
        for (int j = 0;j < numPss; j++)
        {
            fIndex.push_back(twod_to_oned(i,j,numProw)*numPss);
        }
    }

    for(int i = 0; i<numPss;i++){
        for(int j = 0; j<numPss; j++){
            out.push_back(in[fIndex[subs]+numProw*i+j]); 
        }
    }
}

// function valid_sudoku 
// takes in input:
// - a one dimensional vector representing a sudoku
// returns:
// - a boolean which is true if the sudoku is valid and false if it isn't valid
// write your code where indicated
// i.e. within the two remaining incomplete 'for' loops
// do not alter anything else

bool valid_sudoku(const std::vector<int>& g){
    int side = std::sqrt(g.size()); 
    std::vector<int> seq;

    for(int i = 0; i < side; i++){
        seq.clear();
        get_row(i, g, seq);
        for(int j : seq){
            std::cout<<j<<' ';
        }
        std::cout<<std::endl;

        if(!check_sequence(seq)){ 
            return false;
        }
    }

    for(int i = 0; i < side; i++){
        seq.clear();
        get_col(i, g, seq);
        for(int j : seq){
            std::cout<<j<<' ';
        }
        std::cout<<std::endl;

        if(!check_sequence(seq)){ 
            return false;
        }
    }

   for(int i = 0; i < side; i++){
        seq.clear();
        get_subsq(i, g, seq);
        for(int j : seq){
            std::cout<<j<<' ';
        }
        std::cout<<std::endl;
        if(!check_sequence(seq)){ 
            return false;
        }
    }
    return true;
}

int main(){
    std::vector<int> v1{
        1,2,3,4,
        4,1,2,76,
        4,4,4,1,
        9,4,1,-7};
    std::vector<int> v2 = {
    1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 23, 24, 25, 26, 27,
    28, 29, 30, 31, 32, 33, 34, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45,
    46, 47, 48, 49, 50, 51, 52, 53, 54,
    55, 56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72,
    73, 74, 75, 76, 77, 78, 79, 80, 81
};
    std::vector<int> v3 = {
    5, 3, 4, 6, 7, 8, 9, 1, 2,
    6, 7, 2, 1, 9, 5, 3, 4, 8,
    1, 9, 8, 3, 4, 2, 5, 6, 7,
    8, 5, 9, 7, 6, 1, 4, 2, 3,
    4, 2, 6, 8, 5, 3, 7, 9, 1,
    7, 1, 3, 9, 2, 4, 8, 5, 6,
    9, 6, 1, 5, 3, 7, 2, 8, 4,
    2, 8, 7, 4, 1, 9, 6, 3, 5,
    3, 4, 5, 2, 8, 6, 1, 7, 5
};
    std::vector<int> vo;
    std::cout<<valid_sudoku(v3);
}

