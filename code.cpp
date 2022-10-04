#include<iostream>
using namespace std;

int main(){
  int num, ans;
  while(cin >> num){
    int star = 1, dash = num - 1 - 1;
    for(int i = 0; i < num; i++){
      for(int j = 0; j < num*2 - 1;j++){
        if(j <= dash + star && j > dash){
          cout << '*';
        }
        else{
          cout << '_';
        }
      }
      cout<<endl;
      star += 2;
      dash -= 1;
    }
  return 0;
  }
}