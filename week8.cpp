//
// Created by Joseph Afful on 16/03/2026.
//
#include <iostream>
#include <cmath>

int main(){
  // Declare variables
  int age1, age2, sum, difference, product;
  float average;
  // Accept input
  std::cout<<"Enter first age: "<<std::endl;
  std::cin>>age1;
  std::cout<<"Enter second age: "<<std::endl;
  std::cin>>age2;
  // Find the sum of the ages
  sum = age1 + age2;
  // Find the product of the ages
  product = age1 * age2;
  // Find the difference of the ages
  difference = abs(age1 - age2);
  // Find the average of the ages
  average = sum/2.0;

  // Display all results
  std::cout<<"Sum of ages: "<<sum<<std::endl;
  std::cout<<"Product of ages: "<<product<<std::endl;
  std::cout<<"Difference of ages: "<<difference<<std::endl;
  std::cout<<"Average of ages: "<<average<<std::endl;

  return 0;
}

