#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int king, small, count, day;
  cin>> king >> small;
  while(count < small){
    count += count;
    count += king;
    day++;
  }
  cout<<day;
  return 0;    
}