#include<iostream>
using namespace std;
  int main(){
  int a,b;
  cin>>a>>b;
  if(b%a==0){
    cout<<b/a;
  }
  else if(b%a!=0){
    cout<<(b/a)+1;
  }
  return 0;
}