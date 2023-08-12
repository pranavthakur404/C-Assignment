// Define a class complex to represent a complex number with instance variables a and b store real and imaginary parts. Also difine following member function.
// 1) void setData(int,int)
// 2)Void showData()
// 3) Complex add(Complex)
// 4) Complex subtract(Complex)
// 5) Complex multiply(Complex)
#include<iostream>
using namespace std;
class Complex{

  private:
  int a,b;

  public:
  void setData(int x,int y){
    a = x;
    b = y;
  }
  void showData()
  {
    cout<<endl<<"a="<<a<<" b="<<b;
  }
  Complex add(Complex c)
  {
    Complex temp;
    temp.a = a + c.a;
    temp.b = b + c.b;
    return temp;
  }
  Complex substract(Complex c)
  {
    Complex temp;
    temp.a = a - c.a;
    temp.b = b - c.b;
    return temp;
  }
  Complex multipy(Complex c)
  {
    Complex temp;
    temp.a = a * c.a;
    temp.b = b * c.b;
    return temp;
  }
  

};
int main()
{
    Complex c1,c2,c3;
    c1.setData(1,2);
    c2.setData(4,4);
    c1.showData();
    c2.showData();
    c3 = c1.add(c2);
    c3.showData();
     return 0;
}