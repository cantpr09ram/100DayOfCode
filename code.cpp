#include <iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int x, y, z = 0, a, b, c, price = 0;

  cin>>x>>y;
  for(int i=0;i<x;i++){
    cin>>a>>b>>c;
    if (max(a,max(b,c)) - min(a,min(b,c)) >= y){
      price += (a+b+c)/3;
      z++;
    }
  }
  cout<<z<<" "<<price;
  return 0;
}