#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
class Solution {
    public:
        string a;
        void solution();

};

void Solution::solution(){
    for (int i = 0; i < a.length(); i++){
    char c = a[i];
    c = c -7;
    cout << c;
   }
}
int main(void){
    Solution x;
    getline(cin, x.a);
    x.solution();
    return 0;
}