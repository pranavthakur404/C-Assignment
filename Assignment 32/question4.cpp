// In question3, define a methods to display date in the following pattern
// 1. 31-12-2022
// // 2. 31-dec-2022

#include <iostream>
using namespace std;
class Date
{

private:
    int d, m, y;

public:
    void set_date(int date, int month, int year)
    {
        d = date;
        m = month;
        y = year;
    }
    void show_date1()
    {
        cout << d << "-" << m << "-" << y;
    }
    void show_date2()
    {
        if(m==1){
            cout<<d<<"-"<<"Jan"<<"-"<<y;
        }
        else if(m==2){
            cout<<d<<"-"<<"Feb"<<"-"<<y;
        }
        else if(m==3){
            cout<<d<<"-"<<"March"<<"-"<<y;
        }
        else if(m==4){
           cout<<d<<"-"<<"April"<<"-"<<y; 
        }
        else if(m==5){
           cout<<d<<"-"<<"May"<<"-"<<y; 
        }
        else if(m==6){
           cout<<d<<"-"<<"June"<<"-"<<y; 
        }
        else if(m==7){
           cout<<d<<"-"<<"july"<<"-"<<y; 
        }
        else if(m==8){
           cout<<d<<"-"<<"Aug"<<"-"<<y; 
        }
        else if(m==9){
           cout<<d<<"-"<<"Sept"<<"-"<<y; 
        }
        else if(m==10){
           cout<<d<<"-"<<"Oct"<<"-"<<y; 
        }
        else if(m==11){
           cout<<d<<"-"<<"Nov"<<"-"<<y; 
        }
        else if(m==12){
           cout<<d<<"-"<<"Dec"<<"-"<<y; 
        }
    }
};

int main()
{
    Date d1;
    d1.set_date(31, 12, 2022);
    d1.show_date2();
    return 0;
}