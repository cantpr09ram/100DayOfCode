#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
#include<sstream> 
using namespace std;
class Solution {
    public:
        string a;
        void solution();
};

int weigh_calculator(char c, string now) {
    char priority[7] = {'+', '-', '*', '/', '%', '(', ')'};
    int weight_s[7] = {1, 1, 2, 2, 2, 0, -2};
    int weight_c[7] = {1, 1, 2, 2, 2, 4, -2};

    if (now == "isp"){
        for (int i = 0; i < 7; i++){
            if (c == priority[i]){
                return weight_s[i];
            }
        }
    }else if(now == "icp"){
        for (int i = 0; i < 7; i++){
            if (c == priority[i]){
            return weight_c[i];
            }
        }
    }
    return -1;
}    

void Solution::solution(){
    stack<char> operation;
    stack<int> result;
    queue<string> postfix_queue;
    istringstream iss(a);
    string token;  
    while( iss>>token ){  
        cout << token[0];
        if(weigh_calculator(token[0], "isp") == -1){
            postfix_queue.push(token);
        }else{
            while(weigh_calculator(token[0], "icp") <= weigh_calculator(operation.top(), "isp")){
                string temp(1, operation.top());;
                if (temp != ")" || temp != "("){
                    postfix_queue.push(temp);
                }
                operation.pop();   
            }
            operation.push(token[0]);
        }
    }
    
}
int main(void){
    Solution x;
    while(getline(cin, x.a)){
        x.solution();
    }
    return 0;
}