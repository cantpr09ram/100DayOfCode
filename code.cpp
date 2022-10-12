#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int a, b, eq;
  cin >> eq >> a;
  if (a!= eq){
    b = eq - a;
  }else{
    a = a-3;
    b = 3;
  }
  if(a > b){
    cout<<b<<"+"<<a<<"="<<eq;
  }else{
    cout<<a<<"+"<<b<<"="<<eq;
  }
  return 0;    
}