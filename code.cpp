#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int ans[3];
  cin >> ans[0] >> ans[1] >> ans[2];
  cout << *max_element(ans, ans+3);
  return 0;
}