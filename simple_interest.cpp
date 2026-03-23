#include <iostream>

int main() {
    float P, R, T, interest, totalBalance;
    std::cout<<"Enter the Principal(P): "<<std::endl;
    std::cin>>P;
    std::cout<<"Enter the Rate of Interest(R): "<<std::endl;
    std::cin>>R;
    std::cout<<"Enter the Time in years(T): "<<std::endl;
    std::cin>>T;
    interest = (P*R*T)/100;
    totalBalance = P + interest;
    std::cout<<"The interest is : "<<interest<<std::endl;
    std::cout<<"The total balance is : "<<totalBalance<<std::endl;

    return 0;
}