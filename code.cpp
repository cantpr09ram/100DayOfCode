#include<iostream>
#include<cmath>
using namespace std;
int main(){
    string word;
    int lucky, maxn=0, minn=101, letter[26] = {0};
    cin>>word;
    for(int i=0;i<word.length();i++){
        letter[(int)word[i] - 97] ++; 
    }

    for(int i=0; i<26;i++){
        if(letter[i] > maxn) maxn = letter[i];
        if(letter[i] < minn && letter[i] > 0) minn = letter[i];
    }
    bool isPrime = false;
    int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    for(auto p:prime){
        if(maxn - minn == p){
            isPrime = true;
        }
    }
    if(isPrime){
        cout<<"Lucky Word"<<endl;
        cout<<maxn - minn;
    }else{
        cout<<"No Answer"<<endl;
        cout<<'0';
    }
    
    return 0;
}