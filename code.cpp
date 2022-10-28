#include<iostream>
using namespace std;
  int main(){
  double a, now = 1, b = 0;

  cin>>a;

  while(b < a){  
    b += 1/now;
    now++;
    //cout<<now<<endl;
    //cout<<b<<endl;
  }
  printf("%d\n",(int)now-1);
  return 0;
}