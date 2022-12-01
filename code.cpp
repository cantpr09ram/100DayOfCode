#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int a[20] = {0};
  int b[20] = {0};
  int m, n, ans = 0;
  cin>>n>>m;
  for(int i = 0;i<n;i++){
    
    for(int j = 0;j<m;j++){
      cin>>a[j];
    }
    ans += *max_element(a , a + 20);
    b[i] = *max_element(a , a + 20);
  }
  cout<<ans<<endl;
  int x = 0;
  for(int i =0; i<20;i++){
    if((b[i] != 0)&&(ans % b[i] == 0)){
      if(x == 0){
        x = 1;
        cout<<b[i];
      }else if(x == 1){
        cout<<" "<<b[i];
      }
    }
  }
  if(x == 0){
    cout<<-1;
  }
  return 0;
}