#include<iostream>
using namespace std;

int main(){
  int a, b, c, ascii = 0;
  while(cin>>a>>b>>c){
    for(int i=1;i<=c;i++){
      if((i%a==0)||(i%b==0)){
        //cout<<i<<endl;
        ascii += i;
      }
    }
    cout<<char(64+ascii%26);
    ascii = 0;
  }
  return 0;
}