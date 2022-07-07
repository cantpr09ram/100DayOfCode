#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
class Solution {
    public:
        int a , b, c;
        int solution();

};

int Solution::solution(){
    int d = sqrt(pow(b,2) - 4*a*c);
    int x1 = (-b + d) / 2 * a;
    int x2 = (-b - d) / 2 * a;
    if (b*b - 4*a*c < 0){
        cout << "No real root";
    }else if (x1 == x2){
        cout << "Two same roots x="<<x1;

    }else{
        if (x1 > x2){
            cout << "Two different roots x1="<<x1<<" , x2="<<x2;
        }else{
            cout << "Two different roots x1="<<x2<<" , x2="<<x1;
        }
    } 
}
int main(void){
    Solution x;
    cin>>x.a>>x.b>>x.c;
    x.solution();
    return 0;
}