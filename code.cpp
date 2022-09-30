#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  string num;
  cin >> num;
  int i = num.size() - 1;
  int isZero = 0;
  while(i > -1){
    if (isZero == 0 && num[i] != '0'){
      cout << num[i];
      isZero = 1;
    }
    else if(isZero == 1){
      cout<< num[i];
    }
    i--;
  }
  if(isZero == 0){
    cout<<0;
  }
  return 0;
}