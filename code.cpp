#include<iostream>
using namespace std;

int main(){
  int a;
  cin>>a;
  for(int i=0; i<a;i++){
    int a, b, c, total, f = 0;
    cin>>a>>b>>c;
    total = a+b;
    while(total>=c){
      int drink = total / c;
      f += drink;
      total %=c;
      total += drink;
    }
    cout<<f<<endl;
  }
  return 0;
}