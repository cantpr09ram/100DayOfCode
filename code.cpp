#include<iostream>
using namespace std;
int main(){
  int n,m,x=1,one,all=0;
  cin>>n>>m;
  int num[n];
  for(int i=0;i<n;i++){
    cin>>num[i];
  }
  one=num[0];
  for(int i=0;i<n;i++){
    if(x==1){
      if(num[i]>=one+m){
        all=all+(num[i]-one);
        x=0;
        one=num[i];
      }
    }else if(x==0){
      if(num[i]<=one-m){
        one=num[i];
        x=1;
      }
    }
  }
  cout<<all;
}