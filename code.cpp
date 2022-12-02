#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string num;
    int a =0,b = 0;
    cin>>num;
    for (int i = 0; i < num.length(); i ++) {
        if ( i % 2) {
            a += num[i]- '0';
        } else {
            b += num[i] - '0';
        }
    } 
    cout<<abs(a-b);
    return 0;
}