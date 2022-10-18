#include <bits/stdc++.h>
using namespace std;
#define int long long

main (){
    cin.tie(0); cout.sync_with_stdio(false);
    int N;
    stack<int> numbers;
    while (cin>>N) {
      cout<<"hi"<<numbers.size()<<N<<endl;
      if (!N) {
        cout<<"end"<<numbers.size();
        break;
      }else numbers.push(N);
    }
}