#include<iostream>
#include<vector> //vector 
#include<algorithm> //max() 
using namespace std;
int main(){
    int k; 
    cin>>k;
    string s; 
    cin>>s;
    vector<int>times;
    bool last_is_lower=false;
    int cnt=0;
    for(char c:s){
        if(last_is_lower == false){
            if(isupper(c)) cnt++;
            else{
                times.push_back(cnt);
                cnt=1;
                last_is_lower=true;
            }
        }
        else if(last_is_lower){
            if(islower(c)) cnt++;
            else{
                times.push_back(cnt);
                cnt=1;
                last_is_lower=false;
            }
        }
        else{
            if(isupper(c)) continue;
            else last_is_lower=true;
            cnt++;
        }
    }
    if(cnt) times.push_back(cnt);
     
    int max_length=0,cur_length=0;
    for(int i:times){
        if(i==k) cur_length+=k;
        else if(i<k){
            max_length=max(max_length,cur_length);
            cur_length=0;
        }
        else{
            cur_length+=k;
            max_length=max(max_length,cur_length);
            cur_length=k;
        }
    }
    max_length=max(max_length,cur_length);
     
    cout<<max_length<<"\n";
    return 0;
}