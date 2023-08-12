// Define a class time to represent Time like (3 hr 45 min 20 sec), Declare appropriate number of instance member variables and also define instance member functions to set values for the time and display values of time.
#include<iostream>
using namespace std;

class Time{
  
  private:
  int hr, min, sec;

  public:
  void set_time(int h,int m,int s){
    hr = h;
    min = m;
    sec = s;
  }
  void show_time()
  {
    cout<<hr<<"hr "<<min<<"min "<<sec<<"sec";
  }
};
int main()
{

   Time t1;
   t1.set_time(10,15,25);
   t1.show_time();

}