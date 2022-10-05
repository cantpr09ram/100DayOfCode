#include<iostream>
using namespace std;

int main(){
  int a;
  cin>>a;
  for(int i = 0; i<a;i++){
    int a, f, ans = 0;
    cin>>a;
    cin>>f;
    for(int j = a; j<f+1;j++){
      if (j%2 != 0) ans +=j;
    }
    cout<<"Case "<<i+1<<": "<<ans<<endl;
  }
}