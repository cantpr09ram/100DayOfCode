#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
#include<sstream> 
#include<map>
using namespace std;
class Solution {
    public:
        string a;
        void solution();
};

void Solution::solution(){
    map<char, int> map2 = {
        {'A', 10,},
        {'B', 11,},
        {'C', 12,},
        {'D', 13,},
        {'E', 14,},
        {'F', 15,},
        {'G', 16,},
        {'H', 17,},
        {'I', 34,},
        {'J', 18,},
        {'k', 19,},
        {'L', 20,},
        {'M', 21,},
        {'N', 22,},
        {'O', 35,},
        {'P', 23,},
        {'Q', 24,},
        {'R', 25,},
        {'S', 26,},
        {'T', 27,},
        {'U', 28,},
        {'V', 29,},
        {'W', 32,},
        {'X', 30,},
        {'Y', 31,},
        {'Z', 33,}};

        int ans = (map2[a[0]] % 10 )* 9 + (map2[a[0]] / 10);
        //cout << (map2[a[0]] % 10 )* 9 <<" "<< (map2[a[0]] / 10) << endl;
        //cout << ans << endl;
        for (int i = 1; i < 9 ; i++){
            ans += (a[i] -'0') * (9 -i);
            //cout << ans << " " <<(a[i] - '0') * (9-i) <<" "<< a[i] - '0' <<" "<< i << endl;
        }
        ans += (a[9] - '0');
        if (ans % 10 == 0 && ans != 0){
            cout << "real";
            //cout << ans;
        }else{
            cout << "fake";
        }

}
// 2 + 7*9 + 1*8 + 1*7 + 2*6 + 6*5 + 6*4 + 3*3 + 8*2 + 3*1 + 6 = 180
int main(void){
    Solution x;
    cin >> x.a;
    x.solution();
    return 0;
}