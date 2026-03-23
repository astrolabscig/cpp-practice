#include<iostream>

int main(){
    int X, Y, temp;
    std::cout<<"Enter first value"<<std::endl;
    std::cin>>X;
    std::cout<<"Enter second value"<<std::endl;
    std::cin>>Y;
    std::cout<<"Values before swap: X = "<<X<<" Y = "<<Y<<std::endl;
    temp = X;
    X = Y;
    Y = temp;
    std::cout<<"Values After swap: X = "<<X<<" Y = "<<Y<<std::endl;

    return 0;
}