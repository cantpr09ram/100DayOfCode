##
![](/f045.png)
## 
##
```c++
//f045
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;
int main() {
  string num;
  int ver_code;
  int num_list[9] = {0};
  while(cin>>num){
    for(int i = 0;i<num.length();i++){
      num_list[i] = num[i] - 48;
    }
    
    ver_code = num_list[8] + num_list[7]*10 + num_list[6]*100;
    
    sort(num_list,num_list+10,greater<int>());

    if(num_list[1]*num_list[1] + num_list[2]*num_list[2] == ver_code){
      cout<<"Good Morning!"<<endl;
    }else{
      cout<<"SPY!"<<endl;
    }
  }
  return 0;
}

```
## 解題過程
我在做這一題的時候一直卡在49%，後來我發現我計算驗證碼的部分寫錯了
```c++
ver_code = num_list[9] + num_list[8]*10 + num_list[7]*100;    
```
(所以我也很好奇49%哪裡來的)後來改正後就全對了。但是我也不知道當時為什麼會沒注意到這件事。但好在最後還是有發現問題並改正。