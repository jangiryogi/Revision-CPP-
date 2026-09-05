#include <iostream>
using namespace std;

int sumofdigit(int n) {

    int sum =0;

    while (n >0) {

    sum = sum + n % 10;
     n = n /10; 
    
    }
    
return sum ;
}  

int main() {

    int m ;
    cout << "enter the number " << endl;
    cin >> m ;

    cout << " summ of the digit is = " << sumofdigit(m) << endl;
    
    
    

  

    return 0;
}
