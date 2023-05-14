#include <iostream> 
using namespace std;

int main(void){
    string s0, s1;
    int left, right;
    int len0=0, len1;
    
    //========================== 
    ios::sync_with_stdio(0);
    cin.tie(0);
    //========================== 
    cin >> s0;
    
    left = 0;
    while(left < s0.length()){
        len1 = 1;
        right = left+1;
        while(right!=s0.length() && s0[right]-s0[right-1]==1){
            right++;
    }
    
    len1 = right - left;
    if(len1 >= len0){
        len0 = len1;
        s1 = s0.substr(left, len0);
    }
    left = right;
    }
 
    cout << len0 << ' ' << s1;
    return 0;
}