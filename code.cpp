#include<iostream>
using namespace std;
  int main(){
  int now, ans = 0, times;
  int floor[10000];
  cin>>times;
  for(int i = 0;i<times;i++){
    cin>>floor[i];
  }
  now = 1;
  for(int i=0; i<times;i++){
    if(floor[i] > now){
      ans += (floor[i] - now)*3;
    }else{
      ans += (now - floor[i])*2;
    }
    now = floor[i];
  }
  cout<<ans;
  return 0;
}