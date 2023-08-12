// Prime factor of a given number
#include<iostream>
using namespace std;
int main(){
   
  int i=2,num;
  cout<<"Enter a number: ";
  cin>>num;

  while(num){
    if(num%i==0){
        num = num / i;
        cout<<i;
    }else{
      i++;
    }
  }

  return 0;
}