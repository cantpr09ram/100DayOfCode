#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;
int main() {
  string num;
  int ver_code;
  int num_list[9] = {0};
  while(cin>>num){
    for(int i = 0;i<num.length();i++){
      num_list[i] = num[i] - 48;
    }
    
    ver_code = num_list[8] + num_list[7]*10 + num_list[6]*100;
    
    sort(num_list,num_list+9,greater<int>());
    
    if(num_list[0]*num_list[0] + num_list[1]*num_list[1] == ver_code){
      cout<<"Good Morning!"<<endl;
    }else{
      cout<<"SPY!"<<endl;
    }
  }
  return 0;
}