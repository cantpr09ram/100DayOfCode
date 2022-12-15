#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    string code;
    char a[]={'A','B','C','D',
        'E','F','G','H','I','J',
        'K','L','M','N','O','P',
        'Q','R','S','T','U','V',
        'W','X','Y','Z'};

    string b[]={".-","-...","-.-.",
        "-..",".","..-.",
        "--.","....","..",
        ".---","-.-",".-..",
        "--","-.","---",".--.",
        "--.-",".-.","...","-",
        "..-","...-",".--",
        "-..-","-.--","--.."};

    while(cin>>t){        
        for(int i=0;i<t;i++){
            getline(cin,code);
            while(code.length() == 0)
                getline(cin,code);
            string alphabet;
            for(int j=0;j<code.length();j++){
                if(code[j] != ' '){
                    alphabet += code[j];
                }else if(code[j] == ' '){
                    for(int k=0;k<26;k++){
                        if(alphabet == b[k]) cout<<a[k];
                    }
                    alphabet = "";
                }
            }
            for(int k=0;k<26;k++){
                        if(alphabet == b[k]) cout<<a[k];
            }
            alphabet = "";
            cout<<endl;
        }
    }
}
/*

d596

a694
a417
*/