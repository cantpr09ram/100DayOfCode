#include <iostream>
using namespace std;
int main(){
  int n, dust, max, maxcp = 0;
  cin >> n>>dust;
  for(int i = 0; i < n; i++){
    int cp, iv, use = dust;
    cin >> cp >> iv;
    while(use > 1000){
      use -= 1000;
      if( iv<= 29){
        cp += 10;
      }else if ((iv >= 30) && (iv <39)){
        cp += 50;
      }
      else{
        cp += 100; 
      }
    }

    if(cp > maxcp){
      maxcp = cp;
      max = i;
    }
  }
  cout<<max+1<<" "<<maxcp;
  return 0;
}

 