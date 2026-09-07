Write a C++ program that creates an array of 5 integers (for example: 10, 20, 30, 40, 50), loops through the array, and prints the sum of all those numbers.

#include <iostream>
using namespace std;

int main() {
    
    int numbers[5] = {10, 20, 30, 40, 50};
    
    
    int sum = 0;
    
    
    for (int i = 0; i < 5; i++) {
        sum = sum + numbers[i]; 
    }
    
    
    cout << "The sum of the array elements is: " << sum << endl;
    
    return 0;
}
