#include <iostream>
using namespace std;
int main()
{
  int F,N;
  cin >>F>>N;
  int c[N],d[N];

  d[0]=F;
  for(int i=0;i<N;i++){
    cin >> c[i];
  }
  d[1]=c[0];
  for(int i=2;i<N;i++){
    d[i]=c[i-1];
  }
  for(int i=2;i<N;i++){
    if(c[i-2]==c[i-1]&&c[i-1]==0){
      d[i]=5;
    }
    else if(c[i-2]==c[i-1]&&c[i-1]==2){
      d[i]=0;
    }
    else if(c[i-2]==c[i-1]&&c[i-1]==5){
      d[i]=2;
    }
  }

  for(int i=0;i<N;i++){
    if(c[i]==0&&d[i]==5){
      cout << d[i]<<" : Won at round "<< i+1 << endl;
      break;
    }
    if(c[i]==2&&d[i]==0){
      cout << d[i]<<" : Won at round "<< i+1 << endl;
      break;
    }
    if(c[i]==5&&d[i]==2)
    {
      cout << d[i]<<" : Won at round "<< i+1 << endl;
      break;
    }
    if(c[i]==5&&d[i]==0)
    {
      cout << d[i]<<" : Lost at round "<< i+1 << endl;
      break;
    }
    if(c[i]==0&&d[i]==2)
    {
      cout << d[i]<<" : Lost at round "<< i+1 << endl;
      break;
    }
    if(c[i]==2&&d[i]==5){
      cout << d[i]<<" : Lost at round "<< i+1 << endl;
      break;
    }
    cout << d[i] << " ";
  }
  if(d[N-1]==c[N-1]){
    cout <<": Drew at round "<< N << endl;
  }

  return 0;
}