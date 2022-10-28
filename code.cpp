#include<iostream>
#include<math.h>

using namespace std;

int main(){
  long int a;
  while (cin>>a){
    int ans = 0;
    double c5 = 1.0;
    while(a>=pow(5.0,c5)){
      ans += a/pow(5.0,c5);
      c5++;
      //cout<<c5<<endl;
    }
    cout<<ans<<endl;
  }
  return 0;
}