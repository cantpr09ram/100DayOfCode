#include<iostream>
using namespace std;

int main(){
  int num;
  cin >> num;
  for(int i = 0; i < num; i++){
    int start, stop, gap, park = 0;
    cin >> start >> stop >> gap;
    for(int i = start+1; i < stop; i++){
      if (i % gap != 0) {
        cout << i << " ";
        park = 1;
      }
    }
    if(park == 0){
      cout<<"No free parking spaces.";
    }
    cout<<endl;
  }
}