#include<iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
int main(){
    string word;
    getline(cin, word);
    word.erase(remove_if(word.begin(), word.end(),::isspace), word.end());
    cout<<word.length();
    return 0;
}