#include<iostream>
using namespace std;

int main(){
  int step, num;
  while(cin >> step>>num){
    if(num == 0 && step ==0){
      cout<<"Ok!"<<endl;
    }
    else if(num == 0){
      cout<<"Impossib1e!"<<endl;
    }
    else if(step % num == 0){
      cout<<"Ok!"<<endl;
    }else{
      cout<<"Impossib1e!"<<endl;
    }
  }
  return 0;
}