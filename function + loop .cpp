#include <iostream>
using namespace std;

int sumFrom5(int n) {
    int sum = 0;

    for (int i = 5; i <= n; i++) {
        sum = sum + i;
    }

    return sum;
}

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "sum = " << sumFrom5(n) << endl;

    return 0;
}
