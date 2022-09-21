#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double num ;
  cin >> num;
  double ans = (num - 32) * 5/9;
  cout <<fixed<< setprecision(3) <<ans<<endl;
  return 0;
}