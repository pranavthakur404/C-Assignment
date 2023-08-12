// Define a circle with radius as its property. Provide setRadius() and getRadius() methods.Also define methods to return area and circumference of circle
#include<iostream>
using namespace std;
class Circle{
   
   private:
   int r;

   public:
   void setRadius(int n){r = n;};
   int getRadius(){return r;}
   float getArea(){
    return 3.14 * r * r;
   }
   float getCircumference(){
    return 2 * 3.14 * r;
   }

};
int main()
{
    Circle c1;
    c1.setRadius(5);
    cout<<"Area is "<<c1.getArea();
    cout<<endl<<"Circumference is "<<c1.getCircumference();

    return 0;
}