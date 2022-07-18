/*
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
    stack <char> operation;
    stack <int> result;
    queue <string> postfix_queue;
    istringstream iss(a);
    string token;  
    while( iss>>token ){  
        if(weigh_calculator(token[0], "isp") == -1){
            postfix_queue.push(token);
            cout << token <<endl;
        }else{
            while(weigh_calculator(token[0], "icp") <= weigh_calculator(operation.top(), "isp")){
                string temp(1, operation.top());
                if (temp != ")" || temp != "("){
                    postfix_queue.push(temp);
                }
                operation.pop();   
            }
            operation.push(token[0]);
        }
    }
    while(!operation.empty()){
        string temp(1, operation.top());
        postfix_queue.push(temp);
        operation.pop();
    }
    
    //count
    while(!postfix_queue.empty()){
        if(weigh_calculator(postfix_queue.front()[0], "icp") == -1){
            istringstream iss(postfix_queue.front());
            long long int value;
            iss >> value;
            result.push(value);
        }else{
            int tmp_right, tmp_left;
            tmp_right = result.top();
            result.pop();
            tmp_left = result.top();
            result.pop();
            int result_num = 0;
            switch (postfix_queue.front()[0]){
            case '+':
                result_num = tmp_left + tmp_right;
                break;
            case '-':
                result_num = tmp_left - tmp_right;
                break;
            case '*':
                result_num = tmp_left * tmp_right;
                break;
            case '/':
                result_num = tmp_left / tmp_right;
                break;
            case '%':
                result_num = tmp_left % tmp_right;
                break;
            default:
                result_num = 0;
                break;
            }
        result.push(result_num);
        }
    postfix_queue.pop();    
    }
    cout << result.top() << endl;
}

int main(void){
    Solution x;
    while(getline(cin, x.a)){
        x.solution();
    }
    return 0;
}
*/
#include <iostream>
#include <sstream>
#include <stack>
#include <queue>

using namespace std;
// using postfix algorithm.
int weight_calculator(char c);

int main()
{

    stack<char> op;
    stack<int> result_stack;
    queue<string> postfix_queue;

    string input_str;
    string token;

    while (getline(cin, input_str))
    {
        istringstream iss(input_str);
        while (iss >> token)
        {
            // 對 token 進行解析
            if (weight_calculator(token[0]) == -1) // not operator
            {
                postfix_queue.push(token);
            }
            else // is operator.
            {
                if (token[0] == '(')
                {
                    op.push(token[0]); // push '(' into the stack.
                }
                else if (token[0] == ')')
                {
                    while (op.top() != '(')
                    {
                        string tmp_str(1, op.top());
                        postfix_queue.push(tmp_str);
                        op.pop();
                    }
                    op.pop(); // remove the '('
                }
                else if (op.empty() || weight_calculator(token[0]) > weight_calculator(op.top()))
                {
                    // cout << "The" << input_str.at(i) << "is pushed into the stack!\n";
                    op.push(token[0]);
                }
                else if (weight_calculator(token[0]) <= weight_calculator(op.top()))
                {
                    while (!op.empty() && (weight_calculator(op.top()) >= weight_calculator(token[0])))
                    {
                        // cout << op.top() << " is added into postfix str" << endl;
                        string tmp_str(1, op.top());
                        postfix_queue.push(tmp_str);
                        op.pop();
                    }
                    op.push(token[0]);
                    // cout << "The" << input_str.at(i) << "is pushed into the stack!\n";
                }
            }
        }
        while (!op.empty())
        {
            string tmp_str(1, op.top());
            postfix_queue.push(tmp_str);
            op.pop();
        } // when the program runs here, the queue should be ready to analyze.

        while (!postfix_queue.empty())
        {
            // cout << postfix_queue.front() << " ";
            if (weight_calculator(postfix_queue.front()[0]) == -1) // not operator -> a number.
            {
                istringstream iss(postfix_queue.front());
                long long int value;
                iss >> value;
                result_stack.push(value); // push the value into the stack.
            }
            else // met operator.
            {
                int tmp_left, tmp_right;
                tmp_right = result_stack.top();
                result_stack.pop();
                tmp_left = result_stack.top();
                result_stack.pop();
                int result = 0;
                switch (postfix_queue.front()[0])
                {
                case '+':
                    result = tmp_left + tmp_right;
                    break;
                case '-':
                    result = tmp_left - tmp_right;
                    break;
                case '*':
                    result = tmp_left * tmp_right;
                    break;
                case '/':
                    result = tmp_left / tmp_right;
                    break;
                case '%':
                    result = tmp_left % tmp_right;
                    break;
                default:
                    result = 0;
                    break;
                }
                result_stack.push(result); // push the result back to the stack.
            }
            postfix_queue.pop();
        }
        cout << result_stack.top() << endl;
    }

    return 0;
}

int weight_calculator(char c)
{
    char priority[7] = {'+', '-', '*', '/', '%', '(', ')'};
    int weight[7] = {1, 1, 2, 2, 2, 0, 0};

    for (int i = 0; i < 7; i++)
    {
        if (c == priority[i])
        {
            return weight[i];
        }
    }
    return -1; // not found.
}