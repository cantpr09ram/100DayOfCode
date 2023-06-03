#include <iostream>
#include <string>
using namespace std;

bool CheckIfAlphabet(char Input){
    return (((Input>=65)&&(Input<=90))||((Input>=97)&&(Input<=122)));
}

int main() {
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================
    string Input;
    while(cin>>Input){
        if(Input==to_string(0)){
            break;
        }
        int Sum = 0;
        for(int i=0;i<Input.length();i++){
            if(CheckIfAlphabet(Input[i])){
                Sum += (Input[i]<=93)?(Input[i]-'@'):(Input[i]-'`');
            }else{
                cout<<"Fail"<<'\n';
                goto Next;
            }
        }
        cout<<Sum<<'\n';
        Next:{continue;}
    }
    return 0;
}