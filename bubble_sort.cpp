//
// Created by Joseph Afful on 11/03/2026.
//
#include <iostream>
using namespace std;

int nums[5];

// Input Module
void inputModule() {
  for (int i=0; i<=4; i++) {
    cout << "Enter number " << i+1 << ":" << " ";
    cin >> nums[i];
  }
}

// Sort Module
void sortModule() {
  int temp;
  for (int i=0; i<=3; i++) {
    for (int j=0; j<=(3-i); j++) {
      if (nums[j] < nums[j+1]) {
        temp = nums[j+1];
        nums[j+1] = nums[j];
        nums[j] = temp;
      }
    }
  }
}

// Print Module
void printModule() {
  cout << "Numbers in descending order : ";
  for (int i=0; i<=4; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

// Main module
int main() {
  // Calling other modules
  inputModule();
  sortModule();
  printModule();
  system("pause");

  return 0;
}