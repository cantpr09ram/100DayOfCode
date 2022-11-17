#include<iostream>
using namespace std;
int main(){
  int x1, x2, y1,y2, a, max = 0,temp=0, min = 1000000;
  cin>>a;
  cin>>x1>>y1;
  while(a-1){
    cin>>x2>>y2;
    temp = abs(x1-x2) + abs(y1-y2);
    if(temp > max){
      max = temp;
    }
    if(temp<min){
      min = temp;
    }
    x1 = x2;
    y1 = y2;
    a--;
  }
  cout<<max<<" "<<min;
}