// Define a  class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.
#include<iostream>
using namespace std;
class Complex{
   
   private:
   int a,b;

   public:
   void set_a(int x){a=x;}
   int get_a(){return a;}
   void set_b(int y){b=y;}
   int get_b(){return b;}

};

int main()
{

   Complex c1;
   c1.set_a(10);
   cout<<c1.get_a();

}