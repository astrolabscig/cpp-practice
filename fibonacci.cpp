//
// Created by Joseph Afful on 11/03/2026.
//
#include <iostream>
using namespace std;

void sequence_gen(int N) {
    int first = 0, second = 1, next;

    for (int i = 0; i <= (N-1); i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int N;
    cout << "Enter the number of terms for the sequence: " << " " ;
    cin >> N;
    sequence_gen(N);

    return 0;
}