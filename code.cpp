#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, ans = 2;
    cin>>n;
    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0 && i>ans){
            ans = i;
        }
    }
    cout<<n/ans;
    return 0;
}