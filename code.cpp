#include <bits/stdc++.h>
using namespace std;
#define int long long
//f707
main (){
  cin.tie(0); cout.sync_with_stdio(false);
  int N;
  stack<int> numbers;
  while (cin>>N){
    if (!N) {
      break;
    }else numbers.push(N);
  }

  queue<int> div, undiv;
  while (numbers.size()) {
    numbers.top()%7==0 ? div.push(numbers.top()):undiv.push(numbers.top());
    numbers.pop();
  }
  int max = 0, temp;
  if(div.size()){
    temp = 0;
    while (div.size()){
      if(div.front()%70 >= temp){
        temp = div.front()%70;
        max = div.front();
      }
      //cout<<div.front()<<endl; //this 
      div.pop();
    }
  }else{
    temp = 78;
    while(undiv.size()){
      if(undiv.front() % 77 < temp){
        temp = undiv.front() % 77;
        max = undiv.front();
      }
    undiv.pop();
    }
  }
  cout<<max;
}