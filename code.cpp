#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main(void){
  int num;
  cin>>num;
  for(int i=0; i<num;i++){
    int a;
    int index[4] = {0};
    for(int i=0;i<4;i++){
      cin>>index[i];
      char c = getchar();
      if(c == '\n') break;
    }
    double x;
    if(index[0] == 0){
      x = (9.6*index[3]) + (1.8*index[2]) - (4.7*index[1]) + 655;
      
    }else{
      x = (13.7*index[3]) + (5.0*index[2]) - (6.8*index[1]) + 66;
    }
    cout<<setiosflags(ios::fixed);
    cout<<setprecision(2) <<x<<endl;
    //cout.unsetf( ios::fixed );
    
  }
  return 0;
}