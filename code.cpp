#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main(void){
  int num, a, b, c;
  cin>>num;
  cin>>a>>b>>c;
  for(int i=num; i>0;i--){
    if(((i != a) && (i != b)) && (i != c)){
      cout<<"No. "<<i<<endl;
    }
  }
  return 0;
}