#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b;
  char op;
  cin >> a >> op >> b;
  switch(op){
    case '+':
      cout<< a + b;
      break;
    case '-':
      cout << a - b;
      break;
    case '*':
      cout<< a * b;
      break;
    case '/':
      cout<< a / b;
      break;
    default:
      cout <<"no";
  }
  return 0;
}