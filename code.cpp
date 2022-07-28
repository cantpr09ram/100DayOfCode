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
        void scan(string s, int a[]);
        void print(int a[]);
        bool less_than(int a[], int b[]);
};

void Solution::scan(string s, int a[]){
    int i = 500 - 1; // 大數的數字位置
    int j = 0, n = s.length();// 字串的字元位置
    while (i >= n) a[i--] = 0;// 開頭一律填零
    while (i >= 0) a[i--] = s[j++] - '0';// 字串頭尾顛倒，存入陣列
}
void Solution::print(int a[500]){
    int i = 500 - 1;
    while (i >= 0 && a[i] == 0) i--;

    if (i < 0)
        cout << '0';
    else
        while (i >= 0) cout << a[i--];
}

void Solution::solution(){
    //string to array
    int arr_a[500], arr_b[500], ans[500] = {};
    scan(b, arr_b);
    scan(a, arr_a);

    switch (op)
    {
    case '+':
        for(int i = 0; i < 500; i++){
            ans[i] += arr_a[i] + arr_b[i];
            if(ans[i] > 10){
                ans[i] %= 10;
                ans[i+1] += ans[i] / 10;
            }
        }
        print(ans);
        break;
    case '-':
        for(int i = 0; i < 500; i++){
            ans[i] = arr_a[i] - arr_b[i];
            if(ans[i] < 0){
                ans[i] += 10;
                ans[i+1] --;
            }
        }
        for(int i = 0; i < 500; i++){
            if (ans[i] < 0){
                
            }
        }
    case '*':
        for(int i = 0; i < 500; i++){
            for(int j = 0; j < 500; j++){
                ans[i+j] += arr_a[i]*arr_b[j];
            }
        }
        for(int i = 0; i < 499; i++){
            ans[1+i] += ans[i] / 10;
            ans[i] = ans[i] % 10;
        }
        print(ans);
        break;
    case '/':

        break;
    default:
        break;
    }

}
int main(void){
    Solution x;
    cin >> x.a >> x.op >> x.b;
    x.solution();
    return 0;
}