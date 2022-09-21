#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  cout << (num / abs(num))*int(num != 0);
  return 0;
}