#include <iostream>
#include <algorithm>
 #include<iomanip>
using namespace std;

int main(void){
  long long int h, m, s;
  cin >>h >> m >> s;
  m += s / 60;
  s = s % 60;
  h += m / 60;
  m = m % 60;
  h = h % 24;
  cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s;
  //printf("%lld:%lld:%lld",h,m,s);
  return 0;
}