#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int x,y;
void board(int x, int y){
    int cx;
    cx=9-x;
    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
            if(i == cx && j == y){
                std::cout << "K ";
            }
            else{
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
}

bool inrange (int x, int dx){
    if(x + dx <= 8 && x + dx >= 1){
        return true;
    }
    return false;
}

int main(){
    std::srand(std::time(NULL));
    int dx,dy,adx,ady;
    bool cond;
    cond= false;
    x = std::rand()%8+1;
    y = std::rand()%8+1;
    while(!((x==0||x==8)&&(y==0||y==8))){
        std::cout << "The starting position is: " << x << " , " << y << std::endl;
        cond=false;
        board(x, y);
        while(cond==false){
            std::cout<< "where do you want to move: ";
            std::cin>>dx>>dy;
            adx=abs(dx);
            ady=abs(dy);
            if((adx==1&&ady==2)||(adx==2&&ady==1)){ 
                if(inrange(x, dx) && inrange(y, dy)){
                    x=x+dx;
                    y=y+dy;
                    board(x,y);
                    cond=true;
                }
                else {
                    std::cout<<"the movement is not valid";
                }
            }
            else{
                std::cout<<"the movement is not valid";
            
            }
        }
    }
    std::cout << "The knight has reached the corner of the board!" << std::endl;

}
