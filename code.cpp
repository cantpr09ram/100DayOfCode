#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  long long int h, m, s;
  cin >>h >> m >> s;
  m += s / 60;
  s = s % 60;
  h += m / 60;
  m = m % 60;
  h = h % 24;
  printf("%s:%s:%s",h,m,s);
  return 0;
}