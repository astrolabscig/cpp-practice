#include <iostream>

int main() {
    float score;
    std::cout<<"Enter your score: "<<std::endl;
    std::cin>>score;
    if (score > 100 || score < 0 ) {
        std::cout<<"Invalid!";
    } else if (score >= 80) {
        std::cout<<"Grade is A"<<std::endl;
    } else if (score >= 70) {
        std::cout<<"Grade is B"<<std::endl;
    } else if (score >= 60) {
        std::cout<<"Grade is C"<<std::endl;
    } else if (score >= 50) {
        std::cout<<"Grade is D"<<std::endl;
    } else {
        std::cout<<"Grade is F"<<std::endl;
    }
    return 0;
}