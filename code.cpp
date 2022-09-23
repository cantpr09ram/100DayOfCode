#include <iostream>
using namespace std;

int main() {
  int year, num;
  cin >>num;
  for(int i =0; i<num;i++){
    cout <<"Case "<<i+1<<": ";
    cin >> year;
    if (((year % 4 ==0)&&(year % 100 != 0))||(year %400 == 0)){
      cout<<"a leap year"<<endl;
    }else{
      cout<<"a normal year"<<endl;
    }
  }
  
  return 0;
}