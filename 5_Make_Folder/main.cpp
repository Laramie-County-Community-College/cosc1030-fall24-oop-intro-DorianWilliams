#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
   Triangle triangle1;
   Triangle triangle2;

   double base, height;

   // Read and set base and height for triangle1
   cin >> base >> height;
   triangle1.SetBase(base);
   triangle1.SetHeight(height);

   // Read and set base and height for triangle2
   cin >> base >> height;
   triangle2.SetBase(base);
   triangle2.SetHeight(height);
       
   cout << "Triangle with smaller area:" << endl;

   // Determine smaller triangle and output its info
   if (triangle1.GetArea() < triangle2.GetArea()) {
      triangle1.PrintInfo();
   }
   else {
      triangle2.PrintInfo();
   }

   return 0;
}