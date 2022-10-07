#include <iostream>
using namespace std;
int main(){
  int price, price_a = 0, price_b = 0;
  cin >> price;
  price_a = price;
  price_b = price;
  if (price >= 1000){
    price_a = price - (price/ 1000)*100;//琪琪 1
  }
  if (price >= 2000){
    price_b = price - (price / 2000)*200;//天天 0
  }

  if(price_a > price_b){
    cout<<price_b<<" "<< 0;
  }else if (price_a == price_b){
    cout<<price_b<<" "<< 0;
  }else if(price_b > price_a){
    cout<<price_a<<" "<< 1;
  }
   return 0;    
}
 