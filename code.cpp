#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
class Solution {
    public:
        int a;
        void solution();
};

void Solution::solution(){
    cout << a - 1; 
}
int main(void){
    Solution x;
    cin >> x.a;
    x.solution();
    return 0;
}