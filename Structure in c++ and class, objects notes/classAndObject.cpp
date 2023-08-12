// Define a class to represent a complex number. store real and imaginary part. Also define methods to set value of real and imaginary part of a complex number.Define one more method to display compelx number.
#include<iostream>
using namespace std;
class Complex{

   private:
      int a,b;

   public:
      void set(int x,int y)
      {
         a = x;
         b = y;
      }
      void display()
      {
        cout<<a<<" "<<b;
      }

};