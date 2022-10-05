#include<iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0);
  int num1, num2, ans = 0;
  cin>> num1 >> num2;
  for(int i = num1; i < num2+1; i++){
    ans += (i % 2 == 0);
  }
  cout<<ans;
  return 0;
}

#include<iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0);
  int num1, num2, ans = 0;
  cin>> num1 >> num2;
  cout<<abs(((num2-num1)+(num1%2==0)+(num2%2==0))/2);
  return 0;
}