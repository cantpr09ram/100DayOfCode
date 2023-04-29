#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int a, b, c, ans=0;
    long long int num[5], money[5];
    bool isThree = false;
    cin>>a>>b>>c;
    for(int i=0; i<5;i++){
        cin>>num[i];
    }
    for(int i=0; i<5;i++){
        cin>>money[i];
    }

    for(int i=0; i<5;i++){
        if(num[i] == a) ans += money[i];
    }
    for(int i=0; i<5;i++){
        if(num[i] == b) ans += money[i];
    }
    for(int i=0; i<5;i++){
        if(num[i] == c) {
            ans -= money[i];
            isThree = true;
        }
    }
    if(!isThree){
        ans *= 2;
    }
    if(ans < 0){
        cout<<0;
    }else{
        cout<<ans;
    }
    return 0;
}