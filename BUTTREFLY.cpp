The Butterfly Pattern is a classic advanced nested loop problem. It consists of two symmetric halves: an upper wing and a lower wing, with a decreasing and then increasing gap of spaces in the middle.Visual Example ($N = 4$)Plaintext

#include <iostream>
using namespace std;

int main() {
    int n = 4; // You can change this value for a larger or smaller butterfly

    // --- Upper Half ---
    for (int i = 1; i <= n; i++) {
        // Print left wing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right wing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // --- Lower Half ---
    for (int i = n; i >= 1; i--) {
        // Print left wing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right wing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
