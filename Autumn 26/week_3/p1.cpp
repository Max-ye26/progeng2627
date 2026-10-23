#include <iostream>
#include <cmath>
#include <algorithm> 
#include <vector>
#include <numeric>

double a, b, c;
bool val;
float per, area,s;

int main(){

    val=true;
    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;
    std:: vector<double> sides = {a, b, c};
    std::sort(sides.begin(),sides.end()); // Sort the sides in ascending order
    if (sides[0]+sides[1]>sides[2]){
        std:: cout<<"this triangle is not valid";
        val=false; 
    }
    else if (sides[0]==sides[1] || sides [1]==sides[2]){
        std:: cout<<"this triangle is isoceles";
    }
    else if (sides[0]==sides[1] && sides[1]==sides[2]){
        std:: cout<<"this triangle is equalateral";
    }
    else{
        std:: cout<<"this triangle is valid";
    }

    
    if(val==true){
        per = std::accumulate(sides.begin(),sides.end(),0);
        s = per/2;
        area = sqrt(s*(s-sides[0])*(s-sides[1])*(s-sides[2]));
        std:: cout<<"the area is "<<area<<" the perimeter is "<< per;
    }
    // Check whether the sides form a valid triangle

    // If valid:
    //   Determine and display the type of triangle
    //   Calculate and display the perimeter
    //   Calculate and display the area using Heg++ .\p1.cpp -std=c++17 -o .\p1.exe

}