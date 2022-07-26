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
        string a, b;
        char op;
        void solution();
};

void Solution::solution(){
    //string to number
    int arr_a[500] = {}, arr_b[500] = {}, ans[500] = {};
    int len_a = a.length();
    int gap = 500 - len_a;
    while(true){
        if (len_a == -1){
            break;
        }else{
            arr_a[len_a + gap] = a[len_a];
            len_a -- ;
            cout << len_a <<" "<< arr_a[len_a + gap] <<" "<< a[len_a]<<endl;
        }
    }
    int len_b = b.length();
    gap = 500 - len_b;
    while(true){
        if (len_b == -1){
            break;
        }else{
            arr_b[len_b + gap] = b[len_b];
            len_b -- ;
        }
    }
    int i = 500;
    while(arr_a[i] != 0){
        cout << arr_a[i];
        i--;
    }
}
int main(void){
    Solution x;
    cin >> x.a >> x.op >> x.b;
    x.solution();
    return 0;
}