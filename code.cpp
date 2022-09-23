#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int num, max = 0, num2;
  cin >> num;
  for (int i =0; i < num; i++){
    cin >> num2;
    if (num2 > max){
      max = num2;
    }
  }
  cout <<max;
  return 0;
}