#include <iostream>
#include<iomanip>

using namespace std;
int main() {
  int h, m, s, gap;
  cin >>h>>m>>s>>gap;
  gap %= 36;
  h += gap;
  m += gap*30;

  if(m < 0){
    cout<<"hi";
    h += (m/60 + 1);
    m += (m/60 + 1)*60;
  }else{
    h += m/60;
    m %= 60;
  }

  h %= 36;
  if(h < 0){
    h = 36 + h%36;
  }
  cout <<h<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s;
  return 0;
}
//2 15 13 -9