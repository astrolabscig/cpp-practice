#include <iostream>

int main() {
    float value, fahrenheit, celcius;
    char unit;
    std::cout<<"Enter temperature value: "<<std::endl;
    std::cin>>value;
    std::cout<<"Enter temperature unit(C or F): "<<std::endl;
    std::cin>>unit;
    if (unit == 'C'||'c') {
        fahrenheit = (value*(9/5))+32;
        std::cout<<value<<" degree celcius is "<<fahrenheit<<" fahrenheit"<<std::endl;
    } else if (unit == 'F'||'f') {
        celcius = (value-32)*(9/5);
        std::cout<<value<<" fahrenheit is "<<fahrenheit<<" degree celcius"<<std::endl;
    } else {
        std::cout<<"Invalid unit!"<<std::endl;
    }
    return 0;
}