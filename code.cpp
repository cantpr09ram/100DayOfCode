#include<iostream>
using namespace std;
  int main(){
  int num, temp = 0, group = 0, ans;
  cin >>num;
  while(temp < num){
    group++;
    temp += group*4;
  }
  ans = num -(temp - group*4);
  //cout<<ans<<endl;

  if(ans/group == 0|| ((ans/group==1)&&(ans%group==0))){
    cout<<"Pen";
  }else if(ans/group == 1|| ((ans/group==2)&&(ans%group==0))){
    cout<<"Pineapple";
  }else if(ans/group == 2 || ((ans/group==3)&&(ans%group==0))){
    cout<<"Apple";
  }else if((ans/group == 3) || ((ans/group == 0)||(ans%group==0))){
    cout<<"Pineapple pen";
  }
  return 0;
}