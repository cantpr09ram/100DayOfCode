#include<iostream>
using namespace std;

int main(){
  int num, ans;
  while(cin >> num){
    num += 1;
    ans = num;
    while(num > 3){
      if(num == 3){
        break;
      }
      int change = num / 3;
      num -= change*3;
      ans += change; 
    } 
    cout << ans<<endl;
  }
  return 0;
}