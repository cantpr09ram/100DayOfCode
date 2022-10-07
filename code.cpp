#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  if(n <= 5){
    cout << 0 << endl;
  }else if((n > 5) && (n <= 11)){
    cout << 590 << endl;
  }else if((n > 11) && (n <= 17)){
      cout << 790 << endl;
  }else if(n >= 60){
    cout << 399 <<endl;
  }else{
    cout<<890<<endl;
  }
  return 0;
}

 