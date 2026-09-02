#include <iostream>
using namespace std;

int main() {
    int age;

    // Ask the user for their age
    cout << "Enter your age: ";
    cin >> age;

    // Determine the ticket price using if-else
    if (age < 0) {
        cout << "Error: Invalid age entered!" << endl;
    } 
    else if (age < 12) {
        cout << "Child ticket price: $8" << endl;
    } 
    // The && (AND) operator checks if BOTH conditions are true
    else if (age >= 12 && age < 65) {
        cout << "Adult ticket price: $12" << endl;
    } 
    else {
        // If they aren't negative, under 12, or between 12-64, they must be 65+
        cout << "Senior ticket price: $10" << endl;
    }

    return 0;
}
