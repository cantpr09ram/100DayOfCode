#include <iostream>

using namespace std;

int main() {
  int day, num1 = 0, num2, ans = 0;
  cin >> day;
  while(num1 < day){
    cin >> num2;
    num1 += 1;
    ans += num2 * num1;
  }
  cout << ans;

  return 0;
}