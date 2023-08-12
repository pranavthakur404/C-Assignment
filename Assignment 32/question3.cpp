// Define a class Date to represent date (like d=31, m=12, y=2022). Declare appropriate number of instance member variable and also define instance member functions to set date and get date.
#include<iostream>
using namespace std;
class Date{

  private:
  int d,m,y;

  public:
  void set_date(int date,int month,int year){
    d = date;
    m = month;
    y = year;
  }
  int get_date(){
    return d;
  }
  int get_month(){
    return m;
  }
  int get_year(){
    return y;
  }

};

int main()
{
    Date d1;
    d1.set_date(31,12,2022);
    cout<<"d="<<d1.get_date()<<" m="<<d1.get_month()<<" y="<<d1.get_year();
    return 0;
}