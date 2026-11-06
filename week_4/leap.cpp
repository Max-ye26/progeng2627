#include <iostream>
#include <vector>

bool leap_year(int year){
    bool ly;
    if((year%4==0 && year%100!=0) || (year%400==0)){
        ly=true;
    }
    else{
        ly=false;
    }
    return ly;
}

std::vector<int> next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)
    bool ly = leap_year(y1);
    int month = m1;
    int lday;
    if ((month<=7 && month%2==1 &&month!=2)||(month>7 && month%2==0 &&month!=2)){
        lday = 31;
    }
    else if (month==2 && ly=false){
        lday=28;
    }
    else if (month==2 && ly=true){
        lday=29;
    }
    else{
        lday=30;
    }
    //last day
    if(d1<lday){
        d2=d1+1;
    }
    else if(d1=lday && m1!=12){
        d2=1;
        m2=m1+1;
    }
    else{
        d2=1;
        m2=1;
        y2=y1+1;
    }
    std::vector<int> next_date = {d2,m2,y2};
    return next_date;
} 

int main(){
    int d1,m1,y1;
    std::cin>>d1>>m1>>y1;
    std::cout<< "The next date is: " << next_date(d1,m1,y1) << std::endl;

}