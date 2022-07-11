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
    int b = 2 ,n = 0;
    while(a != 1){
        n = 0;
        while (a % b == 0){
            if (n == 0) cout << b;
            a = a / b;
            n++;
        }
        if (n > 1) 
            cout << "^" << n;
        if ( a != 1 && n != 0) 
            cout << " * ";
        b++;
    }
}
int main(void){
    Solution x;
    cin >> x.a;
    x.solution();
    return 0;
}