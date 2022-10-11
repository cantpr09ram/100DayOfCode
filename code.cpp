#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int num, max_ans = 0, ans = 0,sum = 0;
  string player;
  cin >> num >> player;
  int len_player = player.length();
  int player_num [len_player] = { 0 };

  for(int i = 0; i<len_player; i++){
    //player_num[i] = player_num[i] * 10 + (player[i] - 48);
    player_num[len_player - i -1] = player[i] - 48;
  }
  
  for(int i = 0; i<len_player; i++){
      sum += player_num[i];
      //cout <<player_num[i]<<endl;
      if(((i+1) % num == 0) || (i == len_player - 1)){
        if(max_ans <= sum){
          int temp = (i+1) / num;
          ans = max(temp, ans);
          max_ans = sum;
          //cout << ans <<" "<< max_ans<<endl;
        }
        sum = 0;
     }
  }
  
  cout << ans <<" "<< max_ans;
  return 0;    
}