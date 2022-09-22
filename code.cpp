#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int h, m;
  cin >> h >> m;
  if ((h*60 + m > 450) && (h*60 + m < 1020)) cout<<"At Schoo"<<endl;
  else cout <<"Off School"<<endl;
  return 0;
}