#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int b, ans = 0;
  cin >>b;
  for(int i = 0; i < b+1; i++){
    if (i % 2 != 0){
      ans += i;
      //cout<<ans<<endl;
    }
  }
  cout << ans;
  return 0;
}