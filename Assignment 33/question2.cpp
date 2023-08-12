// Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second. Also define following function.
// 1) void setTime(int,int,int)
// 2) void showTime()
// 3)void normalize()
// 4) Time add(Time)
// 5) bool is_greateTime
#include<iostream>
using namespace std;
class Time{
   
   private:
   int h,m,s;

   public: 
   void setTime(int hour,int minute,int second){
        h = hour;
        m = minute;
        s = second;
   }
   void showTime()
   {
    cout<<endl<<h<<"Hr "<<m<<"Min "<<s<<"Sec";
   }

};
int main()
{
    Time t1;
    t1.setTime(12,25,42);
    t1.showTime();

    return 0;
}