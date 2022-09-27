#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int c;
  cin >> c;
  for(int i = 0; i< c; i++){
    int num;
    cin >> num;
    int shop[num] = {};
    for(int j = 0; j < num; j++){
      cin >> shop[j];
    }
    //cout <<shop[2];
    int max = *max_element(shop, shop+sizeof(shop) / sizeof(int)), min = *min_element(shop, shop+sizeof(shop) / sizeof(int));
    //cout << max << min;
    cout << (max - min)*2<<endl;
  }
  return 0;
}