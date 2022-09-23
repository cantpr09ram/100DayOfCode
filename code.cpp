#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int h1, m1, h2, m2, start, end, ans;
  cin >> h1 >> m1;
  cin >> h2 >> m2;
  start = h1*60 + m1;
  end = h2*60 + m2;
  if (start > end) {
    end += 60*24;
    //cout <<"hi"<<endl;
  }
  //cout <<end <<" "<< start<<endl;
  ans = end - start;
  cout << ans / 60 <<" "<< ans % 60;
  return 0;
}