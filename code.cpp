#include <iostream>
#include <vector> 
#include <cctype> //for islower(), isdgit(), tolower(), toupper()
#include <algorithm> //for reverse()
using namespace std;
 
int main(void){
    int p1, p2, p3;
    string s0;
    int left = 0, right;
    vector<string> v; 
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //========================== 
    cin >> p1 >> p2 >> p3;
    cin >> s0; 
    while((right = s0.find('-', left)) != -1){
        v.push_back(s0.substr(left, right-left));
        if(!((islower(s0[right-1]) && islower(s0[right+1])||isdigit(s0[right-1]) && isdigit(s0[right+1]))&& (s0[right-1] < s0[right+1]))){ //check rule(1)
            v.push_back("-"); 
        }else{
            string s1(""); 
            for(char c=s0[right-1]+1; c<s0[right+1]; c++){
                for(int i=0; i<p2; i++){
                    if(p1 == 1) s1 += tolower(c);
                    else if(p1 == 2) s1 += toupper(c);
                    else s1 += '*'; //p1 is 3
                }
            } 
            if(p3 == 2) reverse(s1.begin(), s1.end()); 
            v.push_back(s1);
        }
        left = right+1;
    }
    v.push_back(s0.substr(left)); //最右邊的字串
    for(auto s:v) cout << s;
    return 0;
}