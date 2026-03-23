#include <iostream>

int main() {
    int num1, num2, num3;
    std::cout<<"Enter first number: "<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter second number: "<<std::endl;
    std::cin>>num2;
    std::cout<<"Enter third number: "<<std::endl;
    std::cin>>num3;
    if (num1 >= num2 && num1 >= num3) {
        std::cout<<"Largest number is: "<<num1<<std::endl;
    } else if (num2 >= num1 && num2 >= num3) {
        std::cout<<"Largest number is: "<<num2<<std::endl;
    } else {
        std::cout<<"Largest number is: "<<num3<<std::endl;
    }
    return 0;
}