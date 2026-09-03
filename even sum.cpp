#include <iostream>
using namespace std;
int main() {
   int sum = 0;
  for (int n=16; n <=99; n +=2){

    cout << n << endl;
    sum = sum + n ;
  }
     cout << "sum =" << sum << endl;
    return 0;
}
