#include <bits/stdc++.h>
using namespace std;
int main(void){
  int a, b, asum = 0,bsum = 0;
  int x[10000], y[10000];
  cin >>a>>b;
  for(int i=0;i<a;i++){
    cin>>x[i];
    asum += x[i];
    char c = getchar();
    if(c == '\n') break;
  }
  for(int i=0;i<b;i++){
    cin>>y[i];
    bsum += y[i]; 
    char c = getchar();
    if(c == '\n') break;
  }
  
  if((a > b) && (asum > bsum)){
    cout<<"Yes";
  }else cout<<"No";
  return 0;
}