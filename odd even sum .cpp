#include <iostream>
using namespace std;

int main() {
  int n , esum = 0 , osum = 0;
  cout << "enter the number" << endl;
  cin >> n ;

   for (int i =1; i <=n; i++){

     if (i %2 == 0){
       esum = esum + i ;

     }

     else {
       osum = osum + i ;
     }

     
   }

  cout << "even sum = " << esum << endl;
     cout << "odd sum = " << osum << endl;
      
       

    return 0;
}
