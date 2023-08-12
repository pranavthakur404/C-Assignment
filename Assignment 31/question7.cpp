// Define overloaded functions to calculate volume of a cuboid, cone and sphere.
// volume (cuboid) =   width * height * length; 
// volume (coin) =  3.14 * r * 2 h;
// volume (sphere) = 4/3 * 3.14 (r*r*r)
#include<iostream>
using namespace std;
int volume(int,int,int);
float volume(int,int);
float volume(int);
int main()
{
    cout<<"Volume of cuboid "<<volume(5,7,9)<<endl;
    cout<<"Volume of coin "<<volume(5,7)<<endl;
    cout<<"Volume of Sphere "<<volume(5)<<endl;

    return 0;
}
int volume(int width,int height,int length)
{
    return width * height * length;
}
float volume(int radius,int height)
{
    return (3.14 * radius * 2 * height);
}
float volume(int radius)
{
    return ((4/3) * 3.14 * (radius*radius*radius));
}