#include<iostream>
using namespace std;

int main(){
  int num, ans;
  while(cin >> num){
    for(int i = 0; i < num; i++){
      for(int j = 0; j < num; j++){
        if(j < num -i -1){
          cout<<"_";
        }else{
          cout<<"*";
        }
      }
      cout<<endl;
    }
  return 0;
  }
}