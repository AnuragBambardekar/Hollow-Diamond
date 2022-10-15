#include <iostream>
using namespace std;
int main() {
   int x, p, k, mid;
   cout << "Enter number of lines to print the hollow diamond: ";
   cin >> x;
   if(x %2 == 1) {
      x++;
   }
   mid = (x/2);
   for(p = 1; p<= mid; p++) {
      for(k = 1; k<=(mid-p); k++) {
         cout << " ";
      }
      if(p == 1) {
         cout << "*";
      }else{
         cout << "*"; 
         for(k = 1; k<=2*p-3; k++) { 
            cout << " ";
         }
         cout << "*";
      }
      cout << endl;
   }
   for(p = mid+1; p<x; p++) {
      for(k = 1; k<=p-mid; k++) {
         cout << " ";
      }
      if(p == x-1) {
         cout << "*";
      }else{
         cout << "*";
         for(k = 1; k<=2*(x - p)-3; k++) { 
            cout << " ";
         }
         cout << "*";
      }
      cout << endl;
   }
}