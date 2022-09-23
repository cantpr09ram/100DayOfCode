#include <iostream>

using namespace std;

int main() {
  int a,b,d;
  cin >> a >> b >> d;
  if(a < b){
  while(a <= b){
      cout << a <<" ";
      a = a + d;
    }
    cout << endl;
  }else if(a == b){
      cout << a << endl;
  }else{
      while(b <= a){
      cout << a <<" ";
      a = a + d;
      }
  }
  return 0;
}