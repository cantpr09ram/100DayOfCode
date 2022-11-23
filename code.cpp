#include <iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int x;

  while(cin>>x){
    for(int i=0;i<x;i++){
      int a, b, c, d;
      cin>>a>>b>>c>>d;
      //cout<<a<<b<<c<<d<<"\n";
      if((a == 0)&&(b==1)&&(c==0)&&(d==1))
        cout<<"A";
      else if((a == 0)&&(b==1)&&(c==1)&&(d==1))
        cout<<"B";
      else if((a == 0)&&(b==0)&&(c==1)&&(d==0))
        cout<<"C";
      else if((a == 1)&&(b==1)&&(c==0)&&(d==1))
        cout<<"D";
      else if((a == 1)&&(b==0)&&(c==0)&&(d==0))
        cout<<"E";
      else if((a == 1)&&(b==1)&&(c==0)&&(d==0))
        cout<<"F";
    }
    cout<<"\n";
  }
  return 0;
}