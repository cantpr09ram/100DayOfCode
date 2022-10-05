#include<iostream>
using namespace std;

int main(){
  int a;
  cin>>a;
  for(int i = 0; i<a;i++){
    int a, f;
    cin>>a;
    cin>>f;
    for(int j = 0; j<f;j++){
      //for(int k = 0; k < a; k++){
        int print_num = 1, temp = 1;
        while(print_num != 0){
          for(int l = 0; l < print_num; l++){
            cout<<print_num;
          }
          cout<<endl;
          if(print_num == a){
            temp = -temp;
          }
          print_num += temp;
        }
        cout<<endl;
      //}
      //cout<<endl;
    }
  }
}