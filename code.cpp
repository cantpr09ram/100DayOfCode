#include<iostream>
using namespace std;
  int main(){
  int a, now = 1, b = 0;

  while(cin>>a){
    while(now < a){  
    if(a%now == 0){
      b += now;
      //cout<<now<<endl;
    }
      now++;
      //cout<<now<<endl;
      //cout<<b<<endl;
    }
    if(a > b) cout<<"虧數"<<endl;
    else if(a == b) cout<<"完全數"<<endl;
    else cout<<"盈數"<<endl;
    now = 1;
    b = 0;
  }
  return 0;
}