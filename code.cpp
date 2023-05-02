#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string word, mid;
    int num = 0;
    stack <char> front, back;
    cin>>word;
    cin>>mid;
    num = word.find(mid);
    for(int i=num + mid.length(); i<word.length();i++){
        back.push(word[i]);
    }

    for(int i=0; i<num;i++){
        front.push(word[i]);
    }
    
    while(! back.empty()){
        char &tmp = back.top();
        cout<<tmp;
        back.pop();
    }
    cout<<mid;
    while(! front.empty()){
        char &tmp = front.top();
        cout<<tmp;
        front.pop();
    }
    return 0;
}